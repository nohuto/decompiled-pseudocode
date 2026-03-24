/*
 * XREFs of ?SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z @ 0x1C002A628
 * Callers:
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C002A440 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 *     zzzUpdateCursorImage @ 0x1C0080E90 (zzzUpdateCursorImage.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U2@U2@U2@U3@U3@U3@U3@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@55555444555545@Z @ 0x1C01D302C (--$Write@U-$_tlgWrapSz@D@@U1@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3.c)
 *     ?CursorToString@InputTraceLogging@@CAPEBDPEAUtagCURSOR@@@Z @ 0x1C01D37E4 (-CursorToString@InputTraceLogging@@CAPEBDPEAUtagCURSOR@@@Z.c)
 */

_UNKNOWN **__fastcall InputTraceLogging::Cursor::SetCursorImage(
        __int64 a1,
        struct tagCURSOR *a2,
        int a3,
        int a4,
        int a5,
        int a6)
{
  _UNKNOWN **result; // rax
  int v11; // edi
  int *v12; // rax
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // esi
  int v16; // esi
  int v17; // esi
  int v18; // esi
  int v19; // esi
  const char *v20; // rax
  int v21; // [rsp+C8h] [rbp-80h] BYREF
  int v22; // [rsp+CCh] [rbp-7Ch] BYREF
  int v23; // [rsp+D0h] [rbp-78h] BYREF
  int v24; // [rsp+D4h] [rbp-74h] BYREF
  int v25; // [rsp+D8h] [rbp-70h] BYREF
  int v26; // [rsp+DCh] [rbp-6Ch] BYREF
  int v27; // [rsp+E0h] [rbp-68h] BYREF
  int v28; // [rsp+E4h] [rbp-64h] BYREF
  int v29; // [rsp+E8h] [rbp-60h] BYREF
  int v30; // [rsp+ECh] [rbp-5Ch] BYREF
  int v31; // [rsp+F0h] [rbp-58h] BYREF
  __int64 v32; // [rsp+F8h] [rbp-50h] BYREF
  __int64 v33; // [rsp+100h] [rbp-48h] BYREF
  __int64 v34; // [rsp+108h] [rbp-40h] BYREF
  __int64 v35; // [rsp+110h] [rbp-38h] BYREF
  __int64 v36; // [rsp+118h] [rbp-30h] BYREF
  __int64 v37; // [rsp+120h] [rbp-28h] BYREF
  __int64 v38; // [rsp+128h] [rbp-20h] BYREF
  __int64 v39; // [rsp+130h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+150h] [rbp+8h] BYREF

  result = &retaddr;
  if ( (unsigned int)dword_1C032FB20 > 4 && (qword_1C032FB30 & 8) != 0 )
  {
    result = (_UNKNOWN **)(qword_1C032FB38 & 8);
    if ( result == (_UNKNOWN **)qword_1C032FB38 )
    {
      v11 = *(_DWORD *)UPDWORDPointer(8232LL);
      v12 = (int *)UPDWORDPointer(8232LL);
      v13 = *(_QWORD *)(a1 + 48);
      v14 = *v12;
      v22 = a6;
      v23 = a5;
      v33 = *(_QWORD *)(a1 + 104);
      v34 = *(_QWORD *)(a1 + 96);
      v35 = *(_QWORD *)(a1 + 88);
      v26 = *(__int16 *)(a1 + 86);
      v27 = *(__int16 *)(a1 + 84);
      v28 = *(_DWORD *)(a1 + 144) >> 1;
      v29 = *(_DWORD *)(a1 + 140);
      v30 = *(_DWORD *)(a1 + 80);
      v31 = *(_DWORD *)(a1 + 76);
      v36 = v13;
      v21 = v11;
      v32 = gpqCursor;
      v24 = a3;
      v25 = v14;
      v37 = a1 & -(__int64)(v13 != 0);
      if ( a4 )
      {
        v15 = a4 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( v17 )
            {
              v18 = v17 - 1;
              if ( v18 )
              {
                v19 = v18 - 1;
                if ( v19 )
                {
                  if ( v19 == 1 )
                    v20 = "ExplicitSetPointer";
                  else
                    v20 = "UNKNOWN";
                }
                else
                {
                  v20 = "SizeChange";
                }
              }
              else
              {
                v20 = "HiddenByQueue";
              }
            }
            else
            {
              v20 = "SetFromQueue";
            }
          }
          else
          {
            v20 = "ForceAppStarting";
          }
        }
        else
        {
          v20 = "ForceAutoRun";
        }
      }
      else
      {
        v20 = "HiddenByForeground";
      }
      v38 = (__int64)v20;
      v39 = (__int64)InputTraceLogging::CursorToString(a2);
      return (_UNKNOWN **)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                            (int)&dword_1C032FB20,
                            (int)&dword_1C02F043D,
                            (__int64)&v39,
                            (__int64)&v38,
                            (__int64)&v37,
                            (__int64)&v36,
                            (__int64)&v31,
                            (__int64)&v30,
                            (__int64)&v29,
                            (__int64)&v28,
                            (__int64)&v27,
                            (__int64)&v26,
                            (__int64)&v35,
                            (__int64)&v34,
                            (__int64)&v33,
                            (__int64)&v25,
                            (__int64)&v24,
                            (__int64)&v23,
                            (__int64)&v22,
                            (__int64)&v32,
                            (__int64)&v21);
    }
  }
  return result;
}
