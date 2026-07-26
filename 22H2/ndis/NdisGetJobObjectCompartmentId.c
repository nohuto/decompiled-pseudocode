/*
 * XREFs of NdisGetJobObjectCompartmentId @ 0x1C00B1590
 * Callers:
 *     NdisGetProcessObjectCompartmentId @ 0x1C001E010 (NdisGetProcessObjectCompartmentId.c)
 *     ?ndisNsiGetAllJobInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C00B1420 (-ndisNsiGetAllJobInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z @ 0x1C012740C (-NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z.c)
 * Callees:
 *     NdisGetSessionCompartmentId @ 0x1C0013DA0 (NdisGetSessionCompartmentId.c)
 */

__int64 __fastcall NdisGetJobObjectCompartmentId(__int64 a1)
{
  unsigned int *JobProperty; // rax
  unsigned int v3; // ebx
  unsigned int JobSessionId; // eax

  JobProperty = (unsigned int *)PsGetJobProperty(a1, 1833133134LL);
  if ( JobProperty )
  {
    v3 = *JobProperty;
    ObfDereferenceObject(JobProperty);
  }
  else
  {
    JobSessionId = PsGetJobSessionId(a1);
    return (unsigned int)NdisGetSessionCompartmentId(JobSessionId);
  }
  return v3;
}
