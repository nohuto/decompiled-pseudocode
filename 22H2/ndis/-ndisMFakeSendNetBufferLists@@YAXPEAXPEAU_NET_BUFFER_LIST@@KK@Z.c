/*
 * XREFs of ?ndisMFakeSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0018A00
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C0002550 (NdisSendNetBufferLists.c)
 * Callees:
 *     ?ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0002AF0 (-ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     PktMonClientNblDropNdis @ 0x1C00C74F4 (PktMonClientNblDropNdis.c)
 */

void __fastcall ndisMFakeSendNetBufferLists(_DWORD *a1, struct _NET_BUFFER_LIST *a2, int a3, char a4)
{
  int v7; // ecx
  struct _NET_BUFFER_LIST *i; // rax

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      3u,
      0x51u,
      (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
      (char)a1,
      a2);
  if ( byte_1C00E4FD0 && (a1[1465] & 2) != 0 )
    PktMonClientNblDropNdis((_DWORD)a1 + 5808, (_DWORD)a2, a3, 2, a1[135], -536866811);
  v7 = a1[135];
  for ( i = a2; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
    i->Status = v7;
  ndisMSendCompleteNetBufferListsInternal(a1, a2, a4 & 1);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      3u,
      0x52u,
      (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
      (char)a1,
      a2);
}
