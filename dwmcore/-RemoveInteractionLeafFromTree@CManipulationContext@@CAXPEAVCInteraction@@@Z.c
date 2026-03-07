void __fastcall CManipulationContext::RemoveInteractionLeafFromTree(struct CInteraction *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  struct CInteraction *v6; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-40h] BYREF
  struct CInteraction **v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_1803E07D0 > 4 && tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
  {
    v10 = 0;
    v8 = &v6;
    v6 = a1;
    v9 = 8;
    tlgWriteTransfer_EventWriteTransfer(v2, (unsigned __int8 *)dword_18037AA99, 0LL, 0LL, 3u, &v7);
  }
  (*(void (__fastcall **)(char *))(*((_QWORD *)a1 + 8) + 48LL))((char *)a1 + 64);
  v3 = *((_QWORD *)a1 + 27);
  if ( v3 )
  {
    if ( *(struct CInteraction **)(v3 + 240) == a1 )
      *(_QWORD *)(v3 + 240) = *((_QWORD *)a1 + 28);
    *((_QWORD *)a1 + 27) = 0LL;
  }
  v4 = *((_QWORD *)a1 + 29);
  if ( v4 )
    *(_QWORD *)(v4 + 224) = *((_QWORD *)a1 + 28);
  v5 = *((_QWORD *)a1 + 28);
  if ( v5 )
    *(_QWORD *)(v5 + 232) = *((_QWORD *)a1 + 29);
  *((_QWORD *)a1 + 29) = 0LL;
  *((_QWORD *)a1 + 28) = 0LL;
  *((_QWORD *)a1 + 26) = 0LL;
}
