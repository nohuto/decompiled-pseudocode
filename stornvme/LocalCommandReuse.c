__int64 __fastcall LocalCommandReuse(__int64 a1, __int64 a2)
{
  void *v4; // rcx
  __int64 result; // rax

  if ( (unsigned int)Feature_Servicing_Huawei22H2BluescreenAfterSleep__private_IsEnabledDeviceUsage() && *(_BYTE *)a2 )
    *(_DWORD *)(a1 + 4336) |= 0x40u;
  v4 = *(void **)(a2 + 96);
  *(_BYTE *)(a2 + 11) = 0;
  memset(v4, 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a2 + 96) + 4232LL) = 0LL;
  result = *(_QWORD *)(a2 + 96);
  *(_QWORD *)(a2 + 64) = result;
  *(_BYTE *)a2 = 1;
  return result;
}
