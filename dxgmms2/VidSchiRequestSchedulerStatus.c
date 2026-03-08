/*
 * XREFs of VidSchiRequestSchedulerStatus @ 0x1C00B7E60
 * Callers:
 *     VidSchInitializeAdapter @ 0x1C00B5B90 (VidSchInitializeAdapter.c)
 *     VidSchFlushAdapter @ 0x1C0107550 (VidSchFlushAdapter.c)
 *     VidSchTerminateAdapter @ 0x1C0108B80 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchiGetSchedulerStatus @ 0x1C00189A8 (VidSchiGetSchedulerStatus.c)
 */

__int64 __fastcall VidSchiRequestSchedulerStatus(__int64 a1, int a2, int a3)
{
  unsigned int v3; // esi
  struct _ERESOURCE *v4; // rbp

  v3 = 0;
  v4 = (struct _ERESOURCE *)(a1 + 320);
  if ( a2 != 2 )
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 320), 1u);
  if ( *(_DWORD *)(a1 + 316) != a2 )
  {
    *(_DWORD *)(a1 + 316) = a2;
    *(_QWORD *)(a1 + 1280) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(a1 + 1248), 0, 0);
    if ( a3 )
    {
      *(_QWORD *)(a1 + 1328) = MEMORY[0xFFFFF78000000320];
      KeWaitForSingleObject((PVOID)(a1 + 1304), Executive, 0, 0, 0LL);
      if ( (unsigned int)VidSchiGetSchedulerStatus(a1) != a2 )
        v3 = -1073741823;
    }
  }
  if ( a2 != 2 )
    ExReleaseResourceLite(v4);
  return v3;
}
