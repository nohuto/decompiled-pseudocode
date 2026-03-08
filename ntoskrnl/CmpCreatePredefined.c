/*
 * XREFs of CmpCreatePredefined @ 0x1408130D4
 * Callers:
 *     CmpCreatePerfKeys @ 0x14081300C (CmpCreatePerfKeys.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmpCleanupParseContext @ 0x1406BD6A8 (CmpCleanupParseContext.c)
 *     ObOpenObjectByName @ 0x1406C39E0 (ObOpenObjectByName.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall CmpCreatePredefined(__int64 a1, const WCHAR *a2, struct _OBJECT_HANDLE_INFORMATION a3)
{
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v9[3]; // [rsp+58h] [rbp-A8h] BYREF
  int v10; // [rsp+70h] [rbp-90h]
  int v11; // [rsp+74h] [rbp-8Ch]
  __int128 v12; // [rsp+78h] [rbp-88h]
  PVOID Object; // [rsp+88h] [rbp-78h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v14[38]; // [rsp+90h] [rbp-70h] BYREF

  v11 = 0;
  Handle = 0LL;
  v9[0] = 48LL;
  DestinationString = 0LL;
  memset(v14, 0, 0x128uLL);
  v14[12].HandleAttributes = -1;
  v14[19] = (struct _OBJECT_HANDLE_INFORMATION)&v14[18];
  v14[18] = (struct _OBJECT_HANDLE_INFORMATION)&v14[18];
  memset(&v14[27], 0, 0x50uLL);
  v14[3].HandleAttributes = 16777217;
  v14[0].HandleAttributes = 33;
  v14[7] = a3;
  RtlInitUnicodeString(&DestinationString, a2);
  v9[2] = &DestinationString;
  v9[1] = a1;
  v10 = 576;
  v12 = 0LL;
  if ( (int)ObOpenObjectByName((__int64)v9, (__int64)CmKeyObjectType, 0, 0LL, 131097, (__int64)v14, (__int64)&Handle) >= 0 )
  {
    ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
    ZwClose(Handle);
  }
  return CmpCleanupParseContext(v14, 0LL);
}
