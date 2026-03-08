/*
 * XREFs of VidSchFlushQueuePackets @ 0x1C00188E0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x1C0012A7C (-VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z.c)
 */

void __fastcall VidSchFlushQueuePackets(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  VidSchFlushQueuePacketsInternal(a1, a2, a3, a4, 0);
}
