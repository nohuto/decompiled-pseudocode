__int64 __fastcall REMOTEMONITORMAPPING::FindMappingFromGuestVidPnSourceId(
        struct _KTHREAD **this,
        int a2,
        struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_HOST *a3)
{
  struct _KTHREAD *v6; // rax
  unsigned int v7; // ebx
  _BYTE v9[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9, this + 2, 0);
  DXGPUSHLOCK::AcquireShared(v10);
  v6 = *this;
  v11 = 1;
  while ( 1 )
  {
    if ( v6 == (struct _KTHREAD *)this )
    {
      v7 = -1073741275;
      goto LABEL_6;
    }
    if ( *((_DWORD *)v6 + 10) == a2 )
      break;
    v6 = *(struct _KTHREAD **)v6;
  }
  v7 = 0;
  *(_QWORD *)a3 = *((_QWORD *)v6 + 2);
  *((_DWORD *)a3 + 2) = *((_DWORD *)v6 + 6);
LABEL_6:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
  return v7;
}
