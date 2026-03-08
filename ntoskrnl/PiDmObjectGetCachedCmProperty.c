/*
 * XREFs of PiDmObjectGetCachedCmProperty @ 0x1406CE8B0
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1406CE2F0 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _PnpStringFromGuid @ 0x1406881E8 (_PnpStringFromGuid.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x1406CEAE4 (_CmMapCmObjectTypeToPnpObjectType.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1406D019C (PiDmObjectGetCachedObjectProperty.c)
 */

__int64 __fastcall PiDmObjectGetCachedCmProperty(
        int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        _DWORD *a5,
        __int64 a6,
        _DWORD *a7)
{
  __int64 v7; // rbx
  NTSTATUS CachedObjectProperty; // edx
  int v10; // eax
  int v11; // r8d
  int v12; // r10d
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  int v15; // eax
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  int v18; // [rsp+50h] [rbp-51h] BYREF
  _BYTE v19[4]; // [rsp+54h] [rbp-4Dh] BYREF
  int v20[6]; // [rsp+58h] [rbp-49h] BYREF
  _OWORD v21[4]; // [rsp+70h] [rbp-31h] BYREF
  __int64 v22; // [rsp+B0h] [rbp+Fh]
  int v23; // [rsp+B8h] [rbp+17h]
  __int16 v24; // [rsp+BCh] [rbp+1Bh]

  v7 = a6;
  v18 = 0;
  CachedObjectProperty = -1073741802;
  *(_OWORD *)v20 = 0LL;
  if ( a6 )
    v7 = -(__int64)(*a7 != 0) & a6;
  else
    *a7 = 0;
  if ( a4 == 9 && a1 == 1 )
  {
    v10 = CmMapCmObjectTypeToPnpObjectType(1LL);
    CachedObjectProperty = PiDmObjectGetCachedObjectProperty(
                             v10,
                             v12,
                             v11,
                             0,
                             (__int64)&DEVPKEY_Device_ClassGuid,
                             (__int64)v19,
                             (__int64)v20,
                             16,
                             (__int64)&v18);
    if ( CachedObjectProperty >= 0 )
    {
      *a5 = 1;
      if ( *a7 < 0x4Eu )
      {
        *a7 = 78;
        return (unsigned int)-1073741789;
      }
      else
      {
        CachedObjectProperty = PnpStringFromGuid(v20, (wchar_t *)v21);
        if ( CachedObjectProperty >= 0 )
        {
          v13 = v21[0];
          v14 = v21[1];
          v15 = v23;
          *a7 = 78;
          *(_OWORD *)v7 = v13;
          v16 = v21[2];
          *(_OWORD *)(v7 + 16) = v14;
          v17 = v21[3];
          *(_OWORD *)(v7 + 32) = v16;
          *(_QWORD *)&v16 = v22;
          *(_OWORD *)(v7 + 48) = v17;
          *(_QWORD *)(v7 + 64) = v16;
          *(_DWORD *)(v7 + 72) = v15;
          *(_WORD *)(v7 + 76) = v24;
        }
      }
    }
  }
  return (unsigned int)CachedObjectProperty;
}
