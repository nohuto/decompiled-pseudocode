__int64 __fastcall ACPIDockIrpSetPower(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a2 + 184);
  *(_BYTE *)(v2 + 3) |= 1u;
  if ( *(_DWORD *)(v2 + 16) )
    ACPIDockIrpSetDevicePower((ULONG_PTR)a1, a2);
  else
    ACPIDockIrpSetSystemPower(a1, (PIRP *)a2);
  return 259LL;
}
