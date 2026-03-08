/*
 * XREFs of KiConfigureAllSchedulingInformation @ 0x140B41844
 * Callers:
 *     KeStartAllProcessors @ 0x140B3C580 (KeStartAllProcessors.c)
 * Callees:
 *     KeEnumerateNextSchedulerSubNodeInNode @ 0x1402AB030 (KeEnumerateNextSchedulerSubNodeInNode.c)
 *     KiConfigureNodeSchedulingInformation @ 0x1403AC474 (KiConfigureNodeSchedulingInformation.c)
 *     KiConfigureSchedulingInformation @ 0x140A8B1B4 (KiConfigureSchedulingInformation.c)
 */

__int64 KiConfigureAllSchedulingInformation()
{
  unsigned int v0; // ebx
  __int64 result; // rax
  unsigned __int16 i; // bx
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  int v5; // [rsp+2Ch] [rbp-Ch]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v0 = 0;
  for ( result = (unsigned int)KeNumberProcessors_0; v0 < (unsigned int)KeNumberProcessors_0; ++v0 )
  {
    KiConfigureSchedulingInformation(KiProcessorBlock[v0], 0);
    result = (unsigned int)KeNumberProcessors_0;
  }
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    v5 = 0;
    v3 = KeNodeBlock[i];
    v4 = *(_DWORD *)(v3 + 16);
    while ( 1 )
    {
      result = KeEnumerateNextSchedulerSubNodeInNode((__int64)&v3, &v6);
      if ( (_DWORD)result )
        break;
      KiConfigureNodeSchedulingInformation(v6);
    }
  }
  return result;
}
