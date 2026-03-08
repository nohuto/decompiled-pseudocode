/*
 * XREFs of MiInsertSecureImageActivePatch @ 0x140A35124
 * Callers:
 *     MiLoadHotPatch @ 0x140A352A0 (MiLoadHotPatch.c)
 *     MmRegisterHotPatches @ 0x140B7092C (MmRegisterHotPatches.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x140331710 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x140333B40 (RtlAvlRemoveNode.c)
 *     MiCompareHotPatchNodes @ 0x140A33944 (MiCompareHotPatchNodes.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiInsertSecureImageActivePatch(unsigned __int64 a1)
{
  unsigned __int64 *v1; // rdi
  bool v3; // si
  unsigned __int64 *v4; // rbx
  int v5; // eax
  unsigned __int64 v6; // rax

  v1 = 0LL;
  v3 = 0;
LABEL_2:
  v4 = (unsigned __int64 *)qword_140C694C0;
  if ( qword_140C694C0 )
  {
    while ( 1 )
    {
      v5 = MiCompareHotPatchNodes(a1, (__int64)v4);
      if ( v5 <= 0 )
      {
        if ( v5 >= 0 )
        {
          v1 = v4;
          RtlAvlRemoveNode((unsigned __int64 *)&qword_140C694C0, v4);
          goto LABEL_2;
        }
        v6 = *v4;
        if ( !*v4 )
          break;
      }
      else
      {
        v6 = v4[1];
        if ( !v6 )
        {
          v3 = 1;
          break;
        }
      }
      v4 = (unsigned __int64 *)v6;
    }
  }
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C694C0, (unsigned __int64)v4, v3, a1);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
