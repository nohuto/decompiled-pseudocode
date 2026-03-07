__int64 __fastcall REMOTEMONITORMAPPING::FindMappingFromHostId(
        struct _KTHREAD **this,
        struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_HOST *a2,
        struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_GUEST *a3)
{
  struct _KTHREAD *v6; // r9
  unsigned int v7; // ebx
  _BYTE v9[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9, this + 2, 0);
  DXGPUSHLOCK::AcquireShared(v10);
  v6 = *this;
  v11 = 1;
  if ( v6 == (struct _KTHREAD *)this )
  {
LABEL_6:
    v7 = -1073741275;
  }
  else
  {
    while ( *((_DWORD *)v6 + 4) != *(_DWORD *)a2
         || *((_DWORD *)v6 + 5) != *((_DWORD *)a2 + 1)
         || *((_DWORD *)v6 + 6) != *((_DWORD *)a2 + 2) )
    {
      v6 = *(struct _KTHREAD **)v6;
      if ( v6 == (struct _KTHREAD *)this )
        goto LABEL_6;
    }
    v7 = 0;
    *(_OWORD *)a3 = *(_OWORD *)((char *)v6 + 28);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
  return v7;
}
