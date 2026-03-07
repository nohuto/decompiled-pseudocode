_BYTE *__fastcall NVMeRequestComplete(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  char v5; // r10
  _BYTE *result; // rax
  _BYTE *v7; // rbx

  if ( (unsigned __int8)IsInternalSrb(a1) )
  {
    result = (_BYTE *)GetLocalCommand(a1, v4);
    v7 = result;
    if ( result )
    {
      *result = 0;
      if ( *(_DWORD *)(a2 + 12) == 251658240 )
      {
        if ( (unsigned int)Feature_Servicing_Huawei22H2BluescreenAfterSleep__private_IsEnabledDeviceUsage()
          && (v7[1] & 1) != 0 )
        {
          return (_BYTE *)NVMeControllerReclaimLocalCommand(a1, v7);
        }
        else
        {
          NVMeFreeDmaBuffer(a1, 0x2000LL, a2 + 56, *((_QWORD *)v7 + 13));
          return (_BYTE *)NVMeFreePool(a1, v7);
        }
      }
    }
  }
  else if ( v5 )
  {
    return (_BYTE *)StorPortNotification(4104LL, a1, a2);
  }
  else
  {
    return (_BYTE *)StorPortNotification(0LL, a1, a2);
  }
  return result;
}
