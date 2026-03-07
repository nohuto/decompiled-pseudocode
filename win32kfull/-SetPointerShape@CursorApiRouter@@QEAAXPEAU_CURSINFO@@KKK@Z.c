void __fastcall CursorApiRouter::SetPointerShape(
        CursorApiRouter *this,
        struct _CURSINFO *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v8; // r14d
  int v9; // ebx
  int v10; // edx
  int v11; // r9d
  int v12; // r10d
  int v13; // r11d
  __int64 v14; // [rsp+60h] [rbp-20h] BYREF
  __int64 v15; // [rsp+68h] [rbp-18h] BYREF
  __int64 v16; // [rsp+70h] [rbp-10h] BYREF
  __int64 v17; // [rsp+78h] [rbp-8h] BYREF
  __int64 v18; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v20; // [rsp+C0h] [rbp+40h] BYREF

  v18 = (__int64)this;
  if ( ((a3 & 0x20) != 0) != byte_1C0362198 )
  {
    byte_1C0362198 = (a3 & 0x20) != 0;
    InputTraceLogging::Cursor::ChangeForceSoftwareCursorFlag((a3 & 0x20) != 0);
  }
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v18, (struct _EX_PUSH_LOCK *)&qword_1C0362190);
  v8 = dword_1C0362188;
  v9 = 0;
  gCursorApiRouter = a3;
  byte_1C0362177 = a2 == 0LL;
  if ( a2 )
  {
    byte_1C0362174 = FCursorShadowed(a2);
    byte_1C0362175 = a4 != 0;
  }
  dword_1C0362188 = 2;
  ExReleasePushLockExclusiveEx(v18, 0LL);
  KeLeaveCriticalRegion();
  if ( v8 == 1 )
  {
    CursorApiRouter::DwmSetPointer(0LL, 0);
    GreMovePointer(qword_1C0362178, dword_1C0362180, dword_1C0362184, 1);
  }
  GreSetPointer(a2, a3, a4, a5);
  if ( v8 != 2 && (unsigned int)dword_1C035C080 > 4 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C035C080, 8LL) )
    {
      LODWORD(v20) = v12;
      LODWORD(v18) = v13;
      LODWORD(v19) = v11;
      LOBYTE(v9) = gDWMCapable != 0;
      v15 = (__int64)"ShapeChange";
      LODWORD(v14) = v9;
      v16 = InputTraceLogging::Cursor::CursorApiToString((unsigned int)(v10 - 6));
      v17 = InputTraceLogging::Cursor::CursorApiToString(v8);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_1C035C080,
        (int)&dword_1C031ED39,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v20);
    }
  }
}
