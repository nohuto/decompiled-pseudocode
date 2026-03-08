/*
 * XREFs of IoWMIQueryAllData @ 0x140859C90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     WmipQueryAllData @ 0x14069DF2C (WmipQueryAllData.c)
 */

NTSTATUS __stdcall IoWMIQueryAllData(PVOID DataBlockObject, PULONG InOutBufferSize, PVOID OutBuffer)
{
  ULONG v6; // eax
  NTSTATUS v7; // ecx
  int v8; // eax
  NTSTATUS v10; // eax
  __int64 v11; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v12[80]; // [rsp+40h] [rbp-78h] BYREF

  memset(v12, 0, 0x48uLL);
  LODWORD(v11) = 0;
  v6 = *InOutBufferSize;
  if ( !OutBuffer || v6 < 0x48 )
  {
    OutBuffer = v12;
    v6 = 72;
  }
  *((_QWORD *)OutBuffer + 2) = 0LL;
  *((_DWORD *)OutBuffer + 3) = 0;
  *((_DWORD *)OutBuffer + 11) = 1;
  *(_DWORD *)OutBuffer = 48;
  v7 = WmipQueryAllData(DataBlockObject, 0LL, 0, (__int64)OutBuffer, v6, &v11);
  if ( v7 >= 0 )
  {
    v8 = *((_DWORD *)OutBuffer + 11);
    if ( (v8 & 0x100) != 0 )
    {
      return -1073741637;
    }
    else if ( (v8 & 0x20) != 0 )
    {
      v7 = -1073741789;
      *InOutBufferSize = *((_DWORD *)OutBuffer + 12);
    }
    else
    {
      *InOutBufferSize = v11;
      v10 = v7;
      if ( OutBuffer == v12 )
        return -1073741789;
      return v10;
    }
  }
  return v7;
}
