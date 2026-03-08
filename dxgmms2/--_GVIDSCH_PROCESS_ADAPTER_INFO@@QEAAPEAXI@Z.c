/*
 * XREFs of ??_GVIDSCH_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C0014854
 * Callers:
 *     VidSchiCloseProcessAdapterInfo @ 0x1C00AC8E4 (VidSchiCloseProcessAdapterInfo.c)
 *     VidSchiOpenProcessAdapterInfo @ 0x1C00ACA8C (VidSchiOpenProcessAdapterInfo.c)
 * Callees:
 *     <none>
 */

void *__fastcall VIDSCH_PROCESS_ADAPTER_INFO::`scalar deleting destructor'(VIDSCH_PROCESS_ADAPTER_INFO *this)
{
  char *v2; // rcx
  void *result; // rax

  v2 = (char *)*((_QWORD *)this + 1);
  if ( v2 != (char *)this + 16 && v2 )
    ExFreePoolWithTag(v2, 0);
  *((_QWORD *)this + 1) = 0LL;
  result = this;
  *((_DWORD *)this + 20) = 0;
  return result;
}
