__int64 __fastcall GetTiltKeyName(struct _UNICODE_STRING *a1, unsigned __int16 **a2)
{
  struct _UNICODE_STRING v2; // xmm0
  int DeviceId; // ebx
  unsigned __int64 v6; // rbx
  unsigned __int16 *v7; // rax
  unsigned __int16 *v9; // [rsp+20h] [rbp-20h] BYREF
  struct _UNICODE_STRING v10; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int16 *v11; // [rsp+60h] [rbp+20h] BYREF
  unsigned __int16 *v12; // [rsp+68h] [rbp+28h] BYREF
  unsigned __int16 *v13; // [rsp+78h] [rbp+38h] BYREF

  v2 = *a1;
  *a2 = 0LL;
  v11 = 0LL;
  v13 = 0LL;
  v9 = 0LL;
  v12 = 0LL;
  v10 = v2;
  DeviceId = GetDeviceId(&v10, &v11, &v13);
  if ( DeviceId < 0 )
    goto LABEL_11;
  v10 = *a1;
  DeviceId = GetInstanceId(&v10, &v9, &v12);
  if ( DeviceId < 0 )
    goto LABEL_11;
  v6 = v12 - v11;
  v7 = (unsigned __int16 *)Win32AllocPoolZInit(2 * v6 + 2, 2020635477LL);
  *a2 = v7;
  if ( !v7 )
    return 3221225628LL;
  DeviceId = RtlStringCchCopyNW((char *)v7, v6 + 1, (char *)v11, v6);
  if ( DeviceId < 0 )
  {
LABEL_11:
    if ( *a2 )
    {
      Win32FreePool(*a2);
      *a2 = 0LL;
    }
  }
  return (unsigned int)DeviceId;
}
