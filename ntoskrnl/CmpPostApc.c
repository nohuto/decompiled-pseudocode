/*
 * XREFs of CmpPostApc @ 0x140785260
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     DbgPrint @ 0x1402BDD20 (DbgPrint.c)
 *     CmpFreeSubordinatePost @ 0x1406B4E5C (CmpFreeSubordinatePost.c)
 *     CmpFreePostBlock @ 0x1406B5600 (CmpFreePostBlock.c)
 */

void __fastcall CmpPostApc(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 a5)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rdx
  _KPROCESS *Process; // rcx
  char v9; // cl
  bool v10; // zf
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  __int16 v13; // ax
  char v14; // al
  _QWORD *v15; // rdx
  struct _KEVENT *v16; // rcx
  __int64 v17; // r8
  _QWORD *v18; // rdx

  v6 = *(_QWORD **)a5;
  v7 = *(_QWORD **)(*(_QWORD *)a5 + 64LL);
  if ( (_QWORD *)v7[13] == v7 + 13 )
  {
    DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v7);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !Process[1].Affinity.StaticBitmap[30]
    || ((v13 = WORD2(Process[2].Affinity.StaticBitmap[20]), v13 == 332) || v13 == 452
      ? (v9 = 1, v14 = 1)
      : (v14 = 0, v9 = 1),
        !v14) )
  {
    v9 = 0;
  }
  **(_DWORD **)(v6[8] + 104LL) = *a4;
  v10 = v9 == 0;
  v11 = *(_QWORD *)(v6[8] + 104LL);
  if ( v10 )
    *(_QWORD *)(v11 + 8) = 0LL;
  else
    *(_DWORD *)(v11 + 4) = 0;
  v12 = (_QWORD *)v6[8];
  if ( (_QWORD *)v12[13] == v12 + 13 )
  {
    DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v12);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  *(_QWORD *)a4 = *(_QWORD *)(v6[8] + 104LL);
  v15 = (_QWORD *)v6[8];
  if ( (_QWORD *)v15[13] == v15 + 13 )
  {
    DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v15);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  v16 = *(struct _KEVENT **)(v6[8] + 8LL);
  if ( v16 )
  {
    KeSetEvent(v16, 0, 0);
    ObfDereferenceObject(*(PVOID *)(v6[8] + 8LL));
  }
  v17 = v6[2];
  v18 = (_QWORD *)v6[3];
  if ( *(_QWORD **)(v17 + 8) != v6 + 2 || (_QWORD *)*v18 != v6 + 2 )
    __fastfail(3u);
  *v18 = v17;
  *(_QWORD *)(v17 + 8) = v18;
  CmpFreeSubordinatePost((__int64)v6);
  CmpFreePostBlock(v6);
}
