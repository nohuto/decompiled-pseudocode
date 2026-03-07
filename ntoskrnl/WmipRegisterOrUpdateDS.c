__int64 __fastcall WmipRegisterOrUpdateDS(__int64 a1, char a2)
{
  unsigned int v2; // esi
  unsigned int v5; // ebp
  __int64 v6; // rcx
  unsigned int *Pool2; // rdi
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rcx
  int v11; // ebx
  _OWORD v13[2]; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  *((_QWORD *)&v13[0] + 1) = 0LL;
  v5 = 0x2000;
  while ( 1 )
  {
    Pool2 = (unsigned int *)ExAllocatePool2(64LL, v5, 1147759959LL);
    if ( !Pool2 )
      break;
    LOBYTE(v6) = 11;
    v9 = WmipSendWmiIrp(v6, *(unsigned int *)(a1 + 56), a2 != 0, v5, (__int64)Pool2, v13);
    v11 = v9;
    if ( v9 < 0 )
    {
      if ( v9 == -1073741789 )
      {
LABEL_14:
        v2 = DWORD2(v13[0]);
LABEL_15:
        v5 = *Pool2;
        ExFreePoolWithTag(Pool2, 0);
        v11 = -1073741789;
        goto LABEL_6;
      }
      LOBYTE(v10) = 8;
      v11 = WmipSendWmiIrp(v10, *(unsigned int *)(a1 + 56), a2 != 0, v5, (__int64)Pool2, v13);
    }
    if ( v11 == -1073741789 )
      goto LABEL_14;
    v2 = DWORD2(v13[0]);
    if ( *((_QWORD *)&v13[0] + 1) == 4LL )
      goto LABEL_15;
LABEL_6:
    if ( v11 != -1073741789 )
      goto LABEL_7;
  }
  v11 = -1073741670;
LABEL_7:
  if ( v11 >= 0 )
  {
    LOBYTE(v8) = a2;
    v11 = WmipProcessWmiRegInfo(a1, Pool2, v2, v8);
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v11;
}
