/*
 * XREFs of ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?DeregisterEventSource@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x1400040B8
 * Callers:
 *     ?ReportEventW@CDwmAppHost@@AEAAXGKPEBG0@Z @ 0x140003FF8 (-ReportEventW@CDwmAppHost@@AEAAXGKPEBG0@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int DeregisterEventSource(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int DeregisterEventSource(void *)>>(
        void **a1)
{
  char *v1; // rcx
  int result; // eax

  v1 = (char *)*a1;
  result = (_DWORD)v1 - 1;
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return DeregisterEventSource(v1);
  return result;
}
