__int64 __fastcall Bulk_GetConfiguration(__int64 a1, __int64 a2)
{
  char IsSecureDevice; // al
  __int64 v3; // rdx
  int v4; // r9d
  __int64 v5; // rcx
  __int64 result; // rax

  *(_DWORD *)(a2 + 12) = 3;
  *(_QWORD *)(a2 + 32) = BulkFunctionTable;
  *(_DWORD *)(a2 + 20) = 512;
  *(_DWORD *)(a2 + 16) = 416;
  IsSecureDevice = Controller_IsSecureDevice(a1);
  *(_DWORD *)(v3 + 24) = IsSecureDevice == 0 ? v4 : 0;
  result = *(_QWORD *)(v5 + 336);
  if ( (result & 8) != 0 )
    *(_DWORD *)(v3 + 4) = 114688;
  return result;
}
