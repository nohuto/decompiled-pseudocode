/*
 * XREFs of MiInsertClone @ 0x14066517C
 * Callers:
 *     MiCloneVads @ 0x1406632E8 (MiCloneVads.c)
 *     MiCloneProcessAddressSpace @ 0x140A489C4 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x140287FA0 (RtlAvlInsertNodeEx.c)
 *     MiDeleteCloneZombies @ 0x140367034 (MiDeleteCloneZombies.c)
 */

char __fastcall MiInsertClone(__int64 a1, unsigned __int64 a2, int a3)
{
  bool v3; // bl
  _QWORD *v6; // rdx
  _QWORD *v7; // rax

  v3 = 0;
  if ( a3 )
    MiDeleteCloneZombies(a1, 1);
  v6 = *(_QWORD **)(a1 + 1264);
  if ( v6 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(a2 + 24) > v6[4] || *(_QWORD *)(a2 + 32) >= v6[3] )
      {
        v7 = (_QWORD *)v6[1];
        if ( !v7 )
        {
          v3 = 1;
          return RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 1264), (unsigned __int64)v6, v3, a2);
        }
      }
      else
      {
        v7 = (_QWORD *)*v6;
        if ( !*v6 )
          return RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 1264), (unsigned __int64)v6, v3, a2);
      }
      v6 = v7;
    }
  }
  return RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 1264), (unsigned __int64)v6, v3, a2);
}
