/*
 * XREFs of VhdDeferredAutoAttachVirtualDisks @ 0x140419D38
 * Callers:
 *     PipOobeCompleteAsyncCallback @ 0x14067E970 (PipOobeCompleteAsyncCallback.c)
 * Callees:
 *     VhdiAutoAttachOneVhd @ 0x140681468 (VhdiAutoAttachOneVhd.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void VhdDeferredAutoAttachVirtualDisks()
{
  char *v0; // rbx
  __int64 v1; // rax

  while ( 1 )
  {
    v0 = (char *)qword_140CF8320;
    if ( qword_140CF8320 == &qword_140CF8320 )
      break;
    if ( *((PVOID **)qword_140CF8320 + 1) != &qword_140CF8320
      || (v1 = *(_QWORD *)qword_140CF8320, *(PVOID *)(*(_QWORD *)qword_140CF8320 + 8LL) != qword_140CF8320) )
    {
      __fastfail(3u);
    }
    qword_140CF8320 = *(PVOID *)qword_140CF8320;
    *(_QWORD *)(v1 + 8) = &qword_140CF8320;
    VhdiAutoAttachOneVhd(v0 + 36);
    ExFreePoolWithTag(v0, 0);
  }
}
