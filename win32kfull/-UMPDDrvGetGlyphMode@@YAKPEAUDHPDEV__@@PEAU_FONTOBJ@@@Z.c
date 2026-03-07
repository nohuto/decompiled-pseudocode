__int64 __fastcall UMPDDrvGetGlyphMode(struct DHPDEV__ *a1, struct _FONTOBJ *a2)
{
  UMPDOBJ *v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  size_t Size; // [rsp+20h] [rbp-50h]
  unsigned int v9; // [rsp+30h] [rbp-40h] BYREF
  UMPDOBJ *v10; // [rsp+38h] [rbp-38h] BYREF
  _DWORD v11[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v12; // [rsp+48h] [rbp-28h]
  __int64 v13; // [rsp+50h] [rbp-20h]
  struct DHPDEV__ *v14; // [rsp+58h] [rbp-18h]
  struct _FONTOBJ *v15; // [rsp+60h] [rbp-10h] BYREF

  v12 = 0LL;
  v9 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v10);
  v12 = 0LL;
  v4 = v10;
  if ( !v10 )
    goto LABEL_4;
  v11[0] = 40;
  v11[1] = 37;
  v13 = *(_QWORD *)v10;
  v14 = a1;
  v15 = a2;
  if ( !(unsigned int)UMPDOBJ::pfo(v10, (__m128i **)&v15)
    || (LODWORD(Size) = 4, v5 = UMPDOBJ::Thunk(v4, v11, 0x28u, &v9, Size), v6 = v9, v5 == -1) )
  {
LABEL_4:
    v6 = 1;
  }
  XUMPDOBJ::~XUMPDOBJ(&v10);
  return v6;
}
