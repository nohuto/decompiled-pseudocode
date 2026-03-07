_UNKNOWN **__fastcall InputTraceLogging::Cursor::SetCursorImage(
        __int64 a1,
        struct tagCURSOR *a2,
        int a3,
        int a4,
        int a5,
        int a6)
{
  _UNKNOWN **result; // rax
  int v11; // ecx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  const char *v17; // rax
  int v18; // [rsp+C8h] [rbp-80h] BYREF
  int v19; // [rsp+CCh] [rbp-7Ch] BYREF
  int v20; // [rsp+D0h] [rbp-78h] BYREF
  int v21; // [rsp+D4h] [rbp-74h] BYREF
  int v22; // [rsp+D8h] [rbp-70h] BYREF
  int v23; // [rsp+DCh] [rbp-6Ch] BYREF
  int v24; // [rsp+E0h] [rbp-68h] BYREF
  int v25; // [rsp+E4h] [rbp-64h] BYREF
  int v26; // [rsp+E8h] [rbp-60h] BYREF
  int v27; // [rsp+ECh] [rbp-5Ch] BYREF
  int v28; // [rsp+F0h] [rbp-58h] BYREF
  __int64 v29; // [rsp+F8h] [rbp-50h] BYREF
  __int64 v30; // [rsp+100h] [rbp-48h] BYREF
  __int64 v31; // [rsp+108h] [rbp-40h] BYREF
  __int64 v32; // [rsp+110h] [rbp-38h] BYREF
  __int64 v33; // [rsp+118h] [rbp-30h] BYREF
  __int64 v34; // [rsp+120h] [rbp-28h] BYREF
  __int64 v35; // [rsp+128h] [rbp-20h] BYREF
  __int64 v36; // [rsp+130h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+140h] [rbp-8h] BYREF

  result = &retaddr;
  if ( (unsigned int)dword_1C035C080 > 4 )
  {
    result = (_UNKNOWN **)tlgKeywordOn(&dword_1C035C080, 8LL);
    if ( (_BYTE)result )
    {
      v18 = *(_DWORD *)UPDWORDPointer(8232LL);
      v19 = a6;
      v20 = a5;
      v29 = gpqCursor;
      v21 = a3;
      v11 = *(_DWORD *)UPDWORDPointer(8232LL);
      v30 = *(_QWORD *)(a1 + 104);
      v31 = *(_QWORD *)(a1 + 96);
      v32 = *(_QWORD *)(a1 + 88);
      v23 = *(__int16 *)(a1 + 86);
      v24 = *(__int16 *)(a1 + 84);
      v25 = *(_DWORD *)(a1 + 144) >> 1;
      v26 = *(_DWORD *)(a1 + 140);
      v27 = *(_DWORD *)(a1 + 80);
      v28 = *(_DWORD *)(a1 + 76);
      v33 = *(_QWORD *)(a1 + 48);
      v22 = v11;
      v34 = a1 & -(__int64)(v33 != 0);
      if ( a4 )
      {
        v12 = a4 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            v14 = v13 - 1;
            if ( v14 )
            {
              v15 = v14 - 1;
              if ( v15 )
              {
                v16 = v15 - 1;
                if ( v16 )
                {
                  if ( v16 == 1 )
                    v17 = "ExplicitSetPointer";
                  else
                    v17 = "UNKNOWN";
                }
                else
                {
                  v17 = "SizeChange";
                }
              }
              else
              {
                v17 = "HiddenByQueue";
              }
            }
            else
            {
              v17 = "SetFromQueue";
            }
          }
          else
          {
            v17 = "ForceAppStarting";
          }
        }
        else
        {
          v17 = "ForceAutoRun";
        }
      }
      else
      {
        v17 = "HiddenByForeground";
      }
      v35 = (__int64)v17;
      v36 = (__int64)InputTraceLogging::CursorToString(a2);
      return (_UNKNOWN **)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                            (int)&dword_1C035C080,
                            (int)&dword_1C031B80F,
                            (__int64)&v36,
                            (__int64)&v35,
                            (__int64)&v34,
                            (__int64)&v33,
                            (__int64)&v28,
                            (__int64)&v27,
                            (__int64)&v26,
                            (__int64)&v25,
                            (__int64)&v24,
                            (__int64)&v23,
                            (__int64)&v32,
                            (__int64)&v31,
                            (__int64)&v30,
                            (__int64)&v22,
                            (__int64)&v21,
                            (__int64)&v20,
                            (__int64)&v19,
                            (__int64)&v29,
                            (__int64)&v18);
    }
  }
  return result;
}
