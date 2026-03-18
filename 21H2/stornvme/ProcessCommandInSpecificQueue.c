/*
 * XREFs of ProcessCommandInSpecificQueue @ 0x1C0003C20
 * Callers:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     NVMeHwStartIo @ 0x1C0003A70 (NVMeHwStartIo.c)
 * Callees:
 *     ProcessCommandTrace @ 0x1C0004160 (ProcessCommandTrace.c)
 */

__int64 __fastcall ProcessCommandInSpecificQueue(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  __int64 v7; // rdi
  __int16 v8; // ax
  unsigned __int8 v9; // r12
  int v10; // ecx
  __int64 v11; // rax
  unsigned __int16 v12; // r8
  _WORD *v13; // r10
  unsigned __int16 *v14; // r9
  _QWORD *v15; // r14
  unsigned __int16 *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // r13d
  int v20; // edx
  unsigned __int16 v21; // dx
  unsigned __int16 v22; // cx
  __int64 v23; // r14
  __int64 v24; // r9
  _OWORD *v25; // rdx
  unsigned int v26; // edx
  int v27; // edx
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rax
  __int64 v33; // r9
  __int64 v34; // r8
  __int64 result; // rax
  signed __int32 v36[6]; // [rsp+8h] [rbp-59h] BYREF
  _QWORD *v37; // [rsp+28h] [rbp-39h]
  int *v38; // [rsp+30h] [rbp-31h]
  char *v39; // [rsp+38h] [rbp-29h]
  _DWORD v40[2]; // [rsp+48h] [rbp-19h] BYREF
  __int64 v41; // [rsp+50h] [rbp-11h] BYREF
  _QWORD v42[2]; // [rsp+58h] [rbp-9h] BYREF
  __int128 v43; // [rsp+68h] [rbp+7h]
  char v44; // [rsp+C8h] [rbp+67h] BYREF
  unsigned int v45; // [rsp+D0h] [rbp+6Fh] BYREF
  int v46; // [rsp+D8h] [rbp+77h] BYREF
  unsigned __int16 v47; // [rsp+E0h] [rbp+7Fh]

  v47 = a4;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v7 = *(_QWORD *)(a2 + 104);
  else
    v7 = *(_QWORD *)(a2 + 56);
  if ( (v7 & 0xFFF) != 0 )
    v7 = v7 - (v7 & 0xFFF) + 4096;
  v42[0] = 1LL;
  v42[1] = 0LL;
  v8 = *(_WORD *)(a3 + 40);
  v9 = 1;
  v43 = 0LL;
  if ( !v8 )
  {
    _InterlockedIncrement16((volatile signed __int16 *)(a1 + 832));
    v8 = *(_WORD *)(a3 + 40);
  }
  v10 = *(_DWORD *)(a1 + 32);
  if ( (v10 & 0x10) != 0 )
  {
    *(_BYTE *)(a2 + 3) = 14;
    v9 = 0;
    goto LABEL_55;
  }
  if ( (v10 & 0x100) != 0 && v8 )
  {
    *(_BYTE *)(a2 + 3) = 2;
    v9 = 0;
    goto LABEL_55;
  }
  v37 = v42;
  StorPortExtendedFunction(93LL, a1, 1LL, a3 + 56);
  v11 = *(unsigned __int16 *)(a3 + 40);
  if ( (_WORD)v11 )
  {
    v12 = *(_WORD *)(a1 + 302);
    v17 = 136 * v11;
    v18 = *(_QWORD *)(a1 + 792);
    v13 = (_WORD *)(v17 + v18 - 92);
    v14 = (unsigned __int16 *)(v17 + v18 - 88);
    v15 = (_QWORD *)(v17 + v18 - 104);
    v16 = (unsigned __int16 *)(v17 + v18 - 90);
  }
  else
  {
    v12 = *(_WORD *)(a1 + 300);
    v13 = (_WORD *)(a1 + 356);
    v14 = (unsigned __int16 *)(a1 + 360);
    v15 = (_QWORD *)(a1 + 344);
    v16 = (unsigned __int16 *)(a1 + 358);
  }
  v19 = (unsigned __int16)*v13;
  v20 = *v16;
  if ( v20 == v19 + 1 || !(_WORD)v20 && v19 == v12 - 1 )
    goto LABEL_54;
  *v13 = v19 + 1;
  if ( (_WORD)v19 + 1 == v12 )
    *v13 = 0;
  v21 = *v14;
  if ( *v14 < v12 )
  {
    do
    {
      v22 = v21 + 1;
      if ( !*(_QWORD *)(*v15 + 16LL * v21) )
        goto LABEL_29;
      ++v21;
    }
    while ( v22 < v12 );
  }
  v21 = 0;
  if ( !*v14 )
  {
LABEL_27:
    if ( *v13 )
      --*v13;
    else
      *v13 = v12 - 1;
LABEL_54:
    StorPortNotification(4100LL, a1, v42, v14);
    v9 = 0;
    *(_BYTE *)(a2 + 3) = 5;
    goto LABEL_55;
  }
  while ( 1 )
  {
    v22 = v21 + 1;
    if ( !*(_QWORD *)(*v15 + 16LL * v21) )
      break;
    ++v21;
    if ( v22 >= *v14 )
      goto LABEL_27;
  }
LABEL_29:
  *v14 = v22;
  if ( v22 == v12 )
    *v14 = 0;
  *(_WORD *)(v7 + 4248) = v19;
  *(_WORD *)(v7 + 4246) = v21;
  v23 = 0LL;
  v41 = 0LL;
  if ( *(_WORD *)(a3 + 40) )
    v23 = 344LL * *(unsigned __int16 *)(a3 + 50) + *(_QWORD *)(a1 + 800) - 344LL;
  *(_WORD *)(v7 + 4098) = v21;
  ProcessCommandTrace(a1, a2);
  *(_QWORD *)(*(_QWORD *)(a3 + 32) + 16LL * *(unsigned __int16 *)(v7 + 4246)) = a2;
  *(_WORD *)(*(_QWORD *)(a3 + 32) + 16LL * *(unsigned __int16 *)(v7 + 4246) + 8) = *(_WORD *)(v7 + 4248);
  v25 = *(_OWORD **)(*(_QWORD *)(a3 + 24) + 16LL * *(unsigned __int16 *)(v7 + 4248));
  *v25 = *(_OWORD *)(v7 + 4096);
  v25[1] = *(_OWORD *)(v7 + 4112);
  v25[2] = *(_OWORD *)(v7 + 4128);
  v25[3] = *(_OWORD *)(v7 + 4144);
  *(_WORD *)(*(_QWORD *)(a3 + 24) + 16LL * *(unsigned __int16 *)(v7 + 4248) + 8) = *(_WORD *)(v7 + 4246);
  if ( (*(_BYTE *)(a1 + 21) || (*(_DWORD *)(a1 + 116) & 2) != 0) && *(_DWORD *)(a2 + 12) != 251658240 && a2 != a1 + 864 )
  {
    v26 = 0;
    while ( a2 != 112LL * v26 + a1 + 976 )
    {
      if ( ++v26 >= 6 )
      {
        StorPortExtendedFunction(47LL, a1, 0LL, &v41);
        *(_QWORD *)(v7 + 4160) = v41;
        break;
      }
    }
  }
  _InterlockedIncrement16((volatile signed __int16 *)(a3 + 128));
  v27 = 0;
  if ( (unsigned __int16)(*(_WORD *)(v7 + 4248) + 1) != v47 )
    v27 = (unsigned __int16)(*(_WORD *)(v7 + 4248) + 1);
  **(_DWORD **)(a3 + 16) = v27;
  _InterlockedOr(v36, 0);
  if ( *(_QWORD *)(v7 + 4160) )
  {
    StorPortExtendedFunction(47LL, a1, 0LL, &v41);
    *(_QWORD *)(v7 + 4168) = v41;
  }
  StorPortNotification(4100LL, a1, v42, v24);
  if ( v23 && *(_BYTE *)(v23 + 200) )
  {
    v45 = 0;
    StorPortExtendedFunction(92LL, a1, &v45, v28);
    v29 = *(_QWORD *)(v23 + 208);
    if ( v29 )
    {
      v33 = -10LL * *(unsigned int *)(v23 + 204);
      v44 = 0;
      v34 = *(_QWORD *)(v29 + 8LL * v45);
      v39 = &v44;
      v38 = 0LL;
      v37 = 0LL;
      StorPortExtendedFunction(89LL, a1, v34, v33);
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 3844) & 0x10) != 0 )
      {
        v30 = *(_QWORD *)(a1 + 264);
        v31 = *(_QWORD *)(v30 + 48LL * v45 + 8);
        if ( v31 )
        {
          v40[0] = 0;
          LOWORD(v40[0]) = *(_WORD *)(v30 + 48LL * v45 + 16);
          _BitScanForward64(&v32, v31);
          *(_DWORD *)((char *)v40 + 2) = v32;
          StorPortNotification(4107LL, a1, v23 + 216, v40);
        }
      }
      v38 = &v46;
      v37 = 0LL;
      v46 = 0;
      StorPortNotification(4098LL, a1, v23 + 216, v45);
    }
  }
LABEL_55:
  result = v9;
  if ( !*(_WORD *)(a3 + 40) )
    _InterlockedDecrement16((volatile signed __int16 *)(a1 + 832));
  return result;
}
