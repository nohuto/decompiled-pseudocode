void __fastcall CPropertySet::~CPropertySet(CPropertySet *this)
{
  int v1; // r9d
  int v3; // ecx
  int v4; // r9d
  int v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  int *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  v1 = *((_DWORD *)this + 38);
  *(_QWORD *)this = &CPropertySet::`vftable';
  if ( v1 && (unsigned int)dword_1803E07D0 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1803E07D0, 1LL) )
  {
    v9 = 0;
    v7 = &v5;
    v5 = v4;
    v8 = 4;
    tlgWriteTransfer_EventWriteTransfer(v3, (int)&dword_18037E8A4, 0, 0, 3u, &v6);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 120);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 88);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
