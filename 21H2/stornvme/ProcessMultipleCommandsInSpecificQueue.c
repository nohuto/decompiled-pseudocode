/*
 * XREFs of ProcessMultipleCommandsInSpecificQueue @ 0x1C0024BD0
 * Callers:
 *     ProcessMultipleCommands @ 0x1C0024B10 (ProcessMultipleCommands.c)
 * Callees:
 *     ProcessCommandTrace @ 0x1C0004160 (ProcessCommandTrace.c)
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 *     SrbAssignCommandId @ 0x1C0025414 (SrbAssignCommandId.c)
 */

char __fastcall ProcessMultipleCommandsInSpecificQueue(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  char v7; // r12
  unsigned __int16 v8; // r13
  __int64 v9; // rsi
  __int64 v10; // r9
  __int64 SrbExtension; // rax
  __int64 v12; // r8
  __int64 v13; // r15
  _OWORD *v14; // rdx
  int v15; // ecx
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // r8
  signed __int32 v24[8]; // [rsp+0h] [rbp-70h] BYREF
  _QWORD *v25; // [rsp+20h] [rbp-50h]
  int *v26; // [rsp+28h] [rbp-48h]
  __int16 *v27; // [rsp+30h] [rbp-40h]
  _DWORD v28[2]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v29[2]; // [rsp+48h] [rbp-28h] BYREF
  __int128 v30; // [rsp+58h] [rbp-18h]
  unsigned int v31; // [rsp+B8h] [rbp+48h] BYREF
  int v32; // [rsp+C0h] [rbp+50h] BYREF
  unsigned __int16 v33; // [rsp+C8h] [rbp+58h] BYREF

  v33 = a4;
  v29[0] = 1LL;
  v29[1] = 0LL;
  v25 = v29;
  v7 = 1;
  v30 = 0LL;
  v8 = 0;
  v9 = 0LL;
  StorPortExtendedFunction(93LL, a1, 1LL, a3 + 56);
  while ( a2 )
  {
    SrbExtension = GetSrbExtension(a2);
    v12 = *(unsigned __int16 *)(a3 + 40);
    v13 = SrbExtension;
    if ( !(_WORD)v12 )
    {
      _InterlockedAdd16((volatile signed __int16 *)(a1 + 832), 1u);
      v12 = *(unsigned __int16 *)(a3 + 40);
    }
    if ( (unsigned __int8)SrbAssignCommandId(a1, SrbExtension, v12) )
    {
      if ( *(_WORD *)(a3 + 40) )
        v9 = 344LL * *(unsigned __int16 *)(a3 + 50) + *(_QWORD *)(a1 + 800) - 344LL;
      *(_WORD *)(v13 + 4098) = *(_WORD *)(v13 + 4246);
      ProcessCommandTrace(a1, a2);
      *(_QWORD *)(*(_QWORD *)(a3 + 32) + 16LL * *(unsigned __int16 *)(v13 + 4246)) = a2;
      *(_WORD *)(*(_QWORD *)(a3 + 32) + 16LL * *(unsigned __int16 *)(v13 + 4246) + 8) = *(_WORD *)(v13 + 4248);
      v14 = *(_OWORD **)(*(_QWORD *)(a3 + 24) + 16LL * *(unsigned __int16 *)(v13 + 4248));
      *v14 = *(_OWORD *)(v13 + 4096);
      v14[1] = *(_OWORD *)(v13 + 4112);
      v14[2] = *(_OWORD *)(v13 + 4128);
      v14[3] = *(_OWORD *)(v13 + 4144);
      *(_WORD *)(*(_QWORD *)(a3 + 24) + 16LL * *(unsigned __int16 *)(v13 + 4248) + 8) = *(_WORD *)(v13 + 4246);
      _InterlockedAdd16((volatile signed __int16 *)(a3 + 128), 1u);
      v8 = *(_WORD *)(v13 + 4248) + 1;
    }
    else
    {
      *(_BYTE *)(a2 + 3) = 5;
      v7 = 0;
    }
    a2 = *(_QWORD *)(a2 + 40);
  }
  v15 = 0;
  if ( v8 != v33 )
    v15 = v8;
  **(_DWORD **)(a3 + 16) = v15;
  _InterlockedOr(v24, 0);
  StorPortNotification(4100LL, a1, v29, v10);
  if ( v9 && *(_BYTE *)(v9 + 200) )
  {
    v31 = 0;
    StorPortExtendedFunction(92LL, a1, &v31, v16);
    v17 = *(_QWORD *)(v9 + 208);
    if ( v17 )
    {
      v21 = -10LL * *(unsigned int *)(v9 + 204);
      LOBYTE(v33) = 0;
      v22 = *(_QWORD *)(v17 + 8LL * v31);
      v27 = (__int16 *)&v33;
      v26 = 0LL;
      v25 = 0LL;
      StorPortExtendedFunction(89LL, a1, v22, v21);
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 3844) & 0x10) != 0 )
      {
        v18 = *(_QWORD *)(a1 + 264);
        v19 = *(_QWORD *)(v18 + 48LL * v31 + 8);
        if ( v19 )
        {
          v28[0] = 0;
          LOWORD(v28[0]) = *(_WORD *)(v18 + 48LL * v31 + 16);
          _BitScanForward64(&v20, v19);
          *(_DWORD *)((char *)v28 + 2) = v20;
          StorPortNotification(4107LL, a1, v9 + 216, v28);
        }
      }
      v26 = &v32;
      v25 = 0LL;
      v32 = 0;
      StorPortNotification(4098LL, a1, v9 + 216, v31);
    }
  }
  if ( !*(_WORD *)(a3 + 40) )
    _InterlockedDecrement16((volatile signed __int16 *)(a1 + 832));
  return v7;
}
