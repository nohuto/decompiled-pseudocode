/*
 * XREFs of VhdDeferredAutoAttachVirtualDisks @ 0x1404119A4
 * Callers:
 *     PipOobeCompleteAsyncCallback @ 0x14067C970 (PipOobeCompleteAsyncCallback.c)
 * Callees:
 *     VhdiAutoAttachOneVhd @ 0x14067E088 (VhdiAutoAttachOneVhd.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void VhdDeferredAutoAttachVirtualDisks()
{
  char *v0; // rbx
  __int64 v1; // rax

  while ( 1 )
  {
    v0 = (char *)qword_140CF7F60;
    if ( qword_140CF7F60 == &qword_140CF7F60 )
      break;
    if ( *((PVOID **)qword_140CF7F60 + 1) != &qword_140CF7F60
      || (v1 = *(_QWORD *)qword_140CF7F60, *(PVOID *)(*(_QWORD *)qword_140CF7F60 + 8LL) != qword_140CF7F60) )
    {
      __fastfail(3u);
    }
    qword_140CF7F60 = *(PVOID *)qword_140CF7F60;
    *(_QWORD *)(v1 + 8) = &qword_140CF7F60;
    VhdiAutoAttachOneVhd(v0 + 36);
    ExFreePoolWithTag(v0, 0);
  }
}
