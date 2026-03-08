/*
 * XREFs of MiCfgInitializeProcess @ 0x140727724
 * Callers:
 *     MiMapProcessExecutable @ 0x14072787C (MiMapProcessExecutable.c)
 * Callees:
 *     MiReferenceCfgVad @ 0x140727250 (MiReferenceCfgVad.c)
 *     MiMapSecurePureReserveView @ 0x140727644 (MiMapSecurePureReserveView.c)
 */

__int64 __fastcall MiCfgInitializeProcess(__int64 a1)
{
  _QWORD *v2; // rsi
  __int64 result; // rax
  unsigned int v4; // ebx
  struct _KTHREAD *CurrentThread; // rbp
  __int16 v6; // ax
  __int16 v7; // dx
  __int64 v8; // r10
  __int64 *v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  if ( (*(_DWORD *)(a1 + 2512) & 1) == 0 )
    return 0LL;
  v12 = 0LL;
  v2 = (_QWORD *)(a1 + 1408);
  if ( *(_QWORD *)(a1 + 1496) <= 0x100000000uLL )
  {
    if ( !*v2 )
      return 3221225595LL;
    v6 = *(_WORD *)(a1 + 2412);
    if ( v6 != 332 && v6 != 452 )
      return 3221225595LL;
  }
  v13 = 0x20000000000LL;
  result = MiMapSecurePureReserveView(a1, qword_140C65498, (int)&v12, &v13);
  v4 = result;
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    MiReferenceCfgVad((__int64)CurrentThread, v12, 0);
    if ( !*v2 )
      return v4;
    v7 = *(_WORD *)(a1 + 2412);
    if ( v7 != 332 && v7 != 452 )
      return v4;
    v8 = 0LL;
    v9 = &MiWowSubsystems6432;
    v10 = 0LL;
    while ( v7 != *(_WORD *)v9 )
    {
      v10 = (unsigned int)(v10 + 1);
      v9 = (__int64 *)((char *)v9 + 2);
      if ( (_DWORD)v10 )
        goto LABEL_15;
    }
    v8 = *((_QWORD *)&unk_140C65430 + 8 * v10);
LABEL_15:
    v11 = *(_QWORD *)(a1 + 1496);
    v12 = 0LL;
    v13 = (2 * (v11 >> 4)) >> 3;
    result = MiMapSecurePureReserveView(a1, v8, (int)&v12, &v13);
    v4 = result;
    if ( (int)result >= 0 )
    {
      MiReferenceCfgVad((__int64)CurrentThread, v12, 1);
      return v4;
    }
  }
  return result;
}
