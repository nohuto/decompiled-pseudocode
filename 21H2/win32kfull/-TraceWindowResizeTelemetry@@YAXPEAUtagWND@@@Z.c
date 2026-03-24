/*
 * XREFs of ?TraceWindowResizeTelemetry@@YAXPEAUtagWND@@@Z @ 0x1C020C518
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020EF28 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     GetProcessImageFilename @ 0x1C0001168 (GetProcessImageFilename.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1C020A5B0 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgP.c)
 *     GreGetWindowResizeTelemetry @ 0x1C026F8E8 (GreGetWindowResizeTelemetry.c)
 */

void __fastcall TraceWindowResizeTelemetry(HWND *a1)
{
  HWND *v1; // rbx
  int v2; // edi
  void **v3; // rcx
  __int64 ProcessImageFilename; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  wchar_t *v7[2]; // [rsp+50h] [rbp-10h] BYREF
  int v8; // [rsp+80h] [rbp+20h] BYREF
  int v9; // [rsp+88h] [rbp+28h] BYREF
  int v10; // [rsp+90h] [rbp+30h] BYREF
  int v11; // [rsp+98h] [rbp+38h] BYREF

  v10 = 0;
  v9 = 0;
  v8 = 0;
  v1 = a1;
  if ( (unsigned int)GreGetWindowResizeTelemetry(*a1) )
  {
    v2 = 0;
    if ( (*((_BYTE *)v1[5] + 234) & 0x40) != 0 )
    {
      v1 = (HWND *)v1[14];
      v2 = 1;
      if ( !v1 )
        return;
      do
      {
        if ( (*((_BYTE *)v1[5] + 235) & 1) != 0 )
          break;
        v1 = (HWND *)v1[11];
      }
      while ( v1 );
    }
    if ( v1 )
    {
      v3 = (void **)*((_QWORD *)v1[2] + 53);
      v7[0] = (wchar_t *)&word_1C02E597C;
      ProcessImageFilename = GetProcessImageFilename(v3, v7);
      if ( ProcessImageFilename )
      {
        if ( (unsigned int)dword_1C032B3D8 > 5
          && (qword_1C032B3E8 & 0x400000000000LL) != 0
          && (qword_1C032B3F0 & 0x400000000000LL) == qword_1C032B3F0 )
        {
          v11 = v2;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            qword_1C032B3F0 & 0x400000000000LL,
            byte_1C02F2DAE,
            v5,
            v6,
            (const unsigned __int16 **)v7,
            (__int64)&v11,
            (__int64)&v10,
            (__int64)&v9,
            (__int64)&v8);
        }
        FreeTmpBuffer(ProcessImageFilename);
      }
    }
  }
}
