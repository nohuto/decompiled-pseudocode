char __fastcall ProcessMultipleCommandsInSpecificQueue(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  char v7; // r12
  unsigned __int16 v8; // r13
  __int64 v9; // rsi
  __int64 SrbExtension; // r15
  _OWORD *v11; // rdx
  int v12; // ecx
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // r8
  signed __int32 v21[8]; // [rsp+0h] [rbp-70h] BYREF
  _QWORD *v22; // [rsp+20h] [rbp-50h]
  int *v23; // [rsp+28h] [rbp-48h]
  __int16 *v24; // [rsp+30h] [rbp-40h]
  _DWORD v25[2]; // [rsp+40h] [rbp-30h]
  _QWORD v26[2]; // [rsp+48h] [rbp-28h] BYREF
  __int128 v27; // [rsp+58h] [rbp-18h]
  unsigned int v28; // [rsp+B8h] [rbp+48h] BYREF
  int v29; // [rsp+C0h] [rbp+50h] BYREF
  unsigned __int16 v30; // [rsp+C8h] [rbp+58h] BYREF

  v30 = a4;
  v26[0] = 1LL;
  v26[1] = 0LL;
  v22 = v26;
  v7 = 1;
  v27 = 0LL;
  v8 = 0;
  v9 = 0LL;
  StorPortExtendedFunction(93LL, a1, 1LL, a3 + 56);
  while ( a2 )
  {
    SrbExtension = GetSrbExtension(a2);
    if ( !*(_WORD *)(a3 + 40) )
      _InterlockedAdd16((volatile signed __int16 *)(a1 + 912), 1u);
    if ( (unsigned __int8)SrbAssignCommandId(a1, SrbExtension, *(unsigned __int16 *)(a3 + 40)) )
    {
      if ( *(_WORD *)(a3 + 40) )
        v9 = 392LL * *(unsigned __int16 *)(a3 + 50) + *(_QWORD *)(a1 + 880) - 392LL;
      *(_WORD *)(SrbExtension + 4098) = *(_WORD *)(SrbExtension + 4246);
      ProcessCommandTrace(a1, a2);
      *(_QWORD *)(*(_QWORD *)(a3 + 32) + 16LL * *(unsigned __int16 *)(SrbExtension + 4246)) = a2;
      *(_DWORD *)(*(_QWORD *)(a3 + 32) + 16LL * *(unsigned __int16 *)(SrbExtension + 4246) + 8) = 0;
      *(_WORD *)(*(_QWORD *)(a3 + 32) + 16LL * *(unsigned __int16 *)(SrbExtension + 4246) + 12) = *(_WORD *)(SrbExtension + 4248);
      v11 = *(_OWORD **)(*(_QWORD *)(a3 + 24) + 16LL * *(unsigned __int16 *)(SrbExtension + 4248));
      *v11 = *(_OWORD *)(SrbExtension + 4096);
      v11[1] = *(_OWORD *)(SrbExtension + 4112);
      v11[2] = *(_OWORD *)(SrbExtension + 4128);
      v11[3] = *(_OWORD *)(SrbExtension + 4144);
      *(_WORD *)(*(_QWORD *)(a3 + 24) + 16LL * *(unsigned __int16 *)(SrbExtension + 4248) + 8) = *(_WORD *)(SrbExtension + 4246);
      _InterlockedAdd16((volatile signed __int16 *)(a3 + 128), 1u);
      v8 = *(_WORD *)(SrbExtension + 4248) + 1;
    }
    else
    {
      *(_BYTE *)(a2 + 3) = 5;
      v7 = 0;
    }
    a2 = *(_QWORD *)(a2 + 40);
  }
  v12 = 0;
  if ( v8 != v30 )
    v12 = v8;
  **(_DWORD **)(a3 + 16) = v12;
  _InterlockedOr(v21, 0);
  StorPortNotification(4100LL, a1, v26);
  if ( v9 && *(_BYTE *)(v9 + 248) )
  {
    v28 = 0;
    StorPortExtendedFunction(92LL, a1, &v28, v13);
    v14 = *(_QWORD *)(v9 + 256);
    if ( v14 )
    {
      v18 = -10LL * *(unsigned int *)(v9 + 252);
      LOBYTE(v30) = 0;
      v19 = *(_QWORD *)(v14 + 8LL * v28);
      v24 = (__int16 *)&v30;
      v23 = 0LL;
      v22 = 0LL;
      StorPortExtendedFunction(89LL, a1, v19, v18);
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 4044) & 0x10) != 0 )
      {
        v15 = *(_QWORD *)(a1 + 272);
        v16 = *(_QWORD *)(v15 + 72LL * v28 + 8);
        if ( v16 )
        {
          v25[0] = 0;
          LOWORD(v25[0]) = *(_WORD *)(v15 + 72LL * v28 + 16);
          _BitScanForward64(&v17, v16);
          *(_DWORD *)((char *)v25 + 2) = v17;
          StorPortNotification(4107LL, a1, v9 + 264);
        }
      }
      v23 = &v29;
      v22 = 0LL;
      v29 = 0;
      StorPortNotification(4098LL, a1, v9 + 264);
    }
  }
  if ( !*(_WORD *)(a3 + 40) )
    _InterlockedDecrement16((volatile signed __int16 *)(a1 + 912));
  return v7;
}
