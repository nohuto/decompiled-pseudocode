/*
 * XREFs of ?DoTextureUpdates@CHolographicClient@@AEAAXXZ @ 0x1802A93D0
 * Callers:
 *     ?FrameUpdate@CHolographicClient@@UEAAJIII@Z @ 0x1802A96C0 (-FrameUpdate@CHolographicClient@@UEAAJIII@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xxxq_EventWriteTransfer @ 0x180201FDC (McTemplateU0xxxq_EventWriteTransfer.c)
 *     McTemplateU0xxxx_EventWriteTransfer @ 0x1802A6850 (McTemplateU0xxxx_EventWriteTransfer.c)
 *     ?RemoveAt@?$DynArray@UTextureUpdate@CHolographicClient@@$0A@@@QEAAJI@Z @ 0x1802AAE68 (-RemoveAt@-$DynArray@UTextureUpdate@CHolographicClient@@$0A@@@QEAAJI@Z.c)
 *     McTemplateU0f_EventWriteTransfer @ 0x1802AAFCC (McTemplateU0f_EventWriteTransfer.c)
 */

void __fastcall CHolographicClient::DoTextureUpdates(CHolographicClient *this)
{
  __int64 v1; // rsi
  unsigned int v2; // edi
  __int64 v3; // r8
  unsigned int **v5; // r14
  DWORD v6; // eax
  __int64 v7; // rcx
  __int64 v8; // [rsp+28h] [rbp-20h]
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0LL;
  v2 = *((_DWORD *)this + 62);
  v3 = ++qword_1803E77A0;
  if ( v2 )
  {
    v5 = (unsigned int **)((char *)this + 224);
    while ( 1 )
    {
      v6 = WaitForSingleObject(*((HANDLE *)*v5 + 1), 0);
      if ( !v6 )
        break;
      if ( v6 == -1 )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
        {
          LODWORD(v8) = -1;
          McTemplateU0xxxq_EventWriteTransfer(
            v7,
            &EVTDESC_HOLOGRAPHICCLIENT_TEXTUREUPDATEWAITFAILED,
            qword_1803E77A0,
            qword_1803E77A8,
            v2,
            v8);
        }
        DynArray<CHolographicClient::TextureUpdate,0>::RemoveAt(v5);
        v2 = *((_DWORD *)this + 62);
        if ( v2 )
          continue;
      }
      goto LABEL_12;
    }
    ++qword_1803E77A8;
    if ( *((_DWORD *)this + 16) )
    {
      do
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 3) + 56LL))(
          *((_QWORD *)this + 3),
          **v5,
          *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v1));
        v1 = (unsigned int)(v1 + 1);
      }
      while ( (unsigned int)v1 < *((_DWORD *)this + 16) );
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 192LL))(
      *((_QWORD *)this + 3),
      *((_QWORD *)*v5 + 2));
    DynArray<CHolographicClient::TextureUpdate,0>::RemoveAt(v5);
LABEL_12:
    QueryPerformanceCounter(&PerformanceCount);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
      McTemplateU0f_EventWriteTransfer();
    v3 = qword_1803E77A0;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
    McTemplateU0xxxx_EventWriteTransfer(v3 - qword_1803E77A8, &EVTDESC_HOLOGRAPHICCLIENT_TEXTUREUPDATECOUNT);
}
