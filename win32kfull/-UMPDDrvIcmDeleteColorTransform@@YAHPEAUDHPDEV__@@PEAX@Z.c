_BOOL8 __fastcall UMPDDrvIcmDeleteColorTransform(struct DHPDEV__ *a1, void *a2)
{
  BOOL v4; // ebx
  size_t Size; // [rsp+20h] [rbp-50h]
  int v7; // [rsp+30h] [rbp-40h] BYREF
  UMPDOBJ *v8; // [rsp+38h] [rbp-38h] BYREF
  _DWORD v9[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v10; // [rsp+48h] [rbp-28h]
  __int64 v11; // [rsp+50h] [rbp-20h]
  struct DHPDEV__ *v12; // [rsp+58h] [rbp-18h]
  void *v13; // [rsp+60h] [rbp-10h]

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v8);
  v4 = 0;
  v7 = 0;
  v10 = 0LL;
  if ( v8 )
  {
    v9[1] = 65;
    v9[0] = 40;
    v11 = *(_QWORD *)v8;
    v12 = a1;
    v13 = a2;
    LODWORD(Size) = 4;
    if ( (unsigned int)UMPDOBJ::Thunk(v8, v9, 0x28u, &v7, Size) != -1 )
      v4 = v7 != 0;
  }
  XUMPDOBJ::~XUMPDOBJ(&v8);
  return v4;
}
