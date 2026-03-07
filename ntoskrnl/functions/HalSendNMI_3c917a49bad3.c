__int64 __fastcall HalSendNMI(__int64 a1)
{
  __int16 v2; // r13
  unsigned __int8 v3; // bp
  int v4; // r12d
  __int64 v5; // rbx
  unsigned int *v6; // rdi
  __int64 result; // rax
  unsigned __int64 v8; // rsi
  int v9; // r14d
  bool v10; // zf
  __int64 (__fastcall *v11)(_QWORD, __int64 *, __int128 *, _QWORD, __int64 *); // rax
  __int64 (__fastcall *v12)(_QWORD, _DWORD *, __int128 *, _QWORD, __int64 *); // rax
  __int64 (__fastcall *v13)(_QWORD, _DWORD *, __int128 *, _QWORD, __int128 *); // rax
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp-1C8h] BYREF
  __int64 v15; // [rsp+38h] [rbp-1C0h] BYREF
  __int128 v16; // [rsp+40h] [rbp-1B8h] BYREF
  int v17; // [rsp+50h] [rbp-1A8h]
  _DWORD v18[2]; // [rsp+58h] [rbp-1A0h] BYREF
  _DWORD v19[2]; // [rsp+60h] [rbp-198h] BYREF
  __int128 v20; // [rsp+68h] [rbp-190h] BYREF
  __int64 v21; // [rsp+78h] [rbp-180h]
  __int64 v22; // [rsp+80h] [rbp-178h] BYREF
  __int64 v23; // [rsp+88h] [rbp-170h] BYREF
  __int128 v24; // [rsp+90h] [rbp-168h] BYREF
  _QWORD v25[34]; // [rsp+A0h] [rbp-158h] BYREF
  int v26; // [rsp+1F0h] [rbp-8h]

  v15 = 0x2FFFFFFFFLL;
  _disable();
  v2 = v26;
  v21 = 0LL;
  v3 = 0;
  ProcNumber = 0;
  v4 = v26 & 0x200;
  v24 = 0LL;
  v20 = 0LL;
  LODWORD(v25[0]) = 2097153;
  v17 = 0;
  v16 = 0LL;
  memset((char *)v25 + 4, 0, 0x104uLL);
  KiAndAffinityEx((unsigned __int16 *)&HalpInterruptPhysicalTargets, (unsigned __int16 *)a1, v25, 0x20u);
  v5 = v15;
  if ( HalpInterruptClusterModeEnabled )
  {
    v6 = (unsigned int *)HalpInterruptClusterData;
    ProcNumber = 0;
    while ( (unsigned __int64)v6 < HalpInterruptClusterDataEnd )
    {
      if ( (unsigned int)KeAndGroupAffinityEx((_WORD *)a1, (__int64)(v6 + 2), (char *)&v24) )
      {
        v8 = v24;
        v9 = 0;
        LODWORD(v16) = 6;
        v10 = (_QWORD)v24 == 0LL;
        *((_QWORD *)&v16 + 1) = *v6;
        ProcNumber.Group = WORD4(v24);
        while ( 1 )
        {
          ProcNumber.Number = v3;
          if ( v10 )
            break;
          if ( (v8 & 1) != 0 )
          {
            v9 |= *(_DWORD *)(HalpInterruptTargets + 24LL * KeGetProcessorIndexFromNumber(&ProcNumber) + 12);
            HIDWORD(v16) = v9;
          }
          ++v3;
          v8 >>= 1;
          v10 = v8 == 0;
        }
        v22 = v5;
        v15 = *(_QWORD *)(HalpInterruptIpiLines + 16);
        v11 = *(__int64 (__fastcall **)(_QWORD, __int64 *, __int128 *, _QWORD, __int64 *))(HalpInterruptController + 120);
        _disable();
        result = v11(*(_QWORD *)(HalpInterruptController + 16), &v15, &v16, 0LL, &v22);
        if ( (v2 & 0x200) != 0 )
          _enable();
        v3 = 0;
        if ( (int)result < 0 )
          goto LABEL_6;
      }
      v6 += 6;
    }
    goto LABEL_4;
  }
  if ( HalpInterruptPhysicalModeOnly )
    goto LABEL_4;
  *((_QWORD *)&v20 + 1) = *(_QWORD *)(a1 + 8);
  LODWORD(v16) = 5;
  DWORD2(v16) = 0;
  *(_QWORD *)&v20 = a1;
  while ( !(unsigned int)KeEnumerateNextProcessor(&ProcNumber, (unsigned __int16 **)&v20) )
  {
    if ( *(_DWORD *)(HalpInterruptTargets + 24LL * *(unsigned int *)&ProcNumber) == 5 )
      DWORD2(v16) |= *(_DWORD *)(HalpInterruptTargets + 24LL * *(unsigned int *)&ProcNumber + 8);
  }
  if ( !DWORD2(v16) )
    goto LABEL_4;
  v23 = v5;
  v18[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
  v18[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
  v12 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, _QWORD, __int64 *))(HalpInterruptController + 120);
  _disable();
  result = v12(*(_QWORD *)(HalpInterruptController + 16), v18, &v16, 0LL, &v23);
  if ( (v2 & 0x200) != 0 )
    _enable();
  if ( (int)result >= 0 )
  {
LABEL_4:
    *((_QWORD *)&v20 + 1) = v25[1];
    *(_QWORD *)&v20 = v25;
    ProcNumber = 0;
    LOWORD(v21) = 0;
    do
    {
      result = KeEnumerateNextProcessor(&ProcNumber, (unsigned __int16 **)&v20);
      if ( (_DWORD)result )
        break;
      LODWORD(v16) = 4;
      *(_QWORD *)&v24 = v5;
      DWORD2(v16) = *(_DWORD *)(HalpInterruptTargets + 24LL * *(unsigned int *)&ProcNumber + 8);
      v19[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
      v19[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
      v13 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, _QWORD, __int128 *))(HalpInterruptController + 120);
      _disable();
      result = v13(*(_QWORD *)(HalpInterruptController + 16), v19, &v16, 0LL, &v24);
      if ( (v2 & 0x200) != 0 )
        _enable();
    }
    while ( (int)result >= 0 );
  }
LABEL_6:
  if ( v4 )
    _enable();
  return result;
}
