__int64 __fastcall CCursorClip::DeadzoneJumping::CreatePortal(
        CCursorClip::DeadzoneJumping *this,
        struct CCursorClip::DeadzoneJumping::RegionInfo *a2,
        struct CCursorClip::DeadzoneJumping::RegionInfo *a3,
        struct CCursorClip::DeadzoneJumping::RegionPortal **a4)
{
  int v7; // r9d
  int v8; // r10d
  unsigned __int64 v9; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v10; // rcx
  int v11; // r8d
  int v12; // r9d
  signed int v13; // r10d
  int v14; // esi
  int v15; // esi
  int v16; // r8d
  int v17; // r8d
  int v18; // r9d
  unsigned int v19; // eax
  int v20; // r8d
  int v21; // r9d
  int v22; // r11d
  int v23; // r11d
  __int64 QuotaZInit; // rcx
  __int64 **i; // rax
  __int64 v27; // [rsp+50h] [rbp+8h]
  __int64 v28; // [rsp+58h] [rbp+10h]
  unsigned __int64 v29; // [rsp+60h] [rbp+18h]
  __int64 v30; // [rsp+68h] [rbp+20h]

  *a4 = 0LL;
  v7 = *((_DWORD *)a3 + 5);
  v8 = *((_DWORD *)a2 + 3);
  if ( v8 == v7 )
  {
    if ( !CCursorClip::DeadzoneJumping::RangesOverlap(
            *((_DWORD *)a2 + 2),
            *((_DWORD *)a2 + 4) - 1,
            *((_DWORD *)a3 + 2),
            *((_DWORD *)a3 + 4) - 1) )
      return 0LL;
    LODWORD(v30) = (_DWORD)v10;
    LODWORD(v28) = v9;
    v14 = 2;
    if ( (int)v10 > v11 )
      v11 = (int)v10;
    HIDWORD(v27) = v13;
    v29 = __PAIR64__(v13, v11);
    if ( (int)v9 < v12 )
      v12 = v9;
    HIDWORD(v28) = v13;
    LODWORD(v27) = v12;
  }
  else
  {
    v15 = *((_DWORD *)a2 + 5);
    v16 = *((_DWORD *)a3 + 3);
    if ( v15 == v16 )
    {
      if ( !CCursorClip::DeadzoneJumping::RangesOverlap(
              *((_DWORD *)a2 + 2),
              *((_DWORD *)a2 + 4) - 1,
              *((_DWORD *)a3 + 2),
              *((_DWORD *)a3 + 4) - 1) )
        return 0LL;
      v19 = v15 - 1;
      LODWORD(v30) = (_DWORD)v10;
      LODWORD(v28) = v9;
      HIDWORD(v27) = v15 - 1;
      v14 = 4;
      if ( (int)v10 > v17 )
        v17 = (int)v10;
      v29 = __PAIR64__(v19, v17);
      HIDWORD(v28) = v19;
      if ( (int)v9 < v18 )
        v18 = v9;
      HIDWORD(v30) = v19;
      LODWORD(v27) = v18;
      goto LABEL_27;
    }
    if ( *((_DWORD *)a2 + 2) == *((_DWORD *)a3 + 4) )
    {
      if ( !CCursorClip::DeadzoneJumping::RangesOverlap(v8, v15 - 1, v16, v7 - 1) )
        return 0LL;
      LODWORD(v27) = v22;
      v14 = 1;
      LODWORD(v29) = v22;
      LODWORD(v28) = v22;
      LODWORD(v30) = v22;
    }
    else
    {
      if ( *((_DWORD *)a2 + 4) != *((_DWORD *)a3 + 2)
        || !CCursorClip::DeadzoneJumping::RangesOverlap(v8, v15 - 1, v16, v7 - 1) )
      {
        return 0LL;
      }
      v14 = 3;
      LODWORD(v27) = v23 - 1;
      LODWORD(v29) = v23 - 1;
      LODWORD(v28) = v23 - 1;
      LODWORD(v30) = v23 - 1;
    }
    HIDWORD(v28) = v9;
    if ( v13 > v20 )
      v20 = v13;
    HIDWORD(v29) = v20;
    if ( (int)v9 < v21 )
      v21 = v9;
    HIDWORD(v27) = v21;
  }
  HIDWORD(v30) = v13;
LABEL_27:
  QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v10, v9, 0x48uLL, 0x6A637A44u);
  if ( !QuotaZInit )
    return 3221225495LL;
  *(_QWORD *)(QuotaZInit + 8) = 0LL;
  *(_QWORD *)(QuotaZInit + 32) = v29;
  *(_QWORD *)(QuotaZInit + 40) = v27;
  *(_QWORD *)(QuotaZInit + 48) = v30;
  *(_QWORD *)(QuotaZInit + 56) = v28;
  *(_DWORD *)(QuotaZInit + 64) = v14;
  *(_QWORD *)(QuotaZInit + 16) = a2;
  *(_QWORD *)(QuotaZInit + 24) = a3;
  for ( i = (__int64 **)*((_QWORD *)a3 + 3); i; i = (__int64 **)*i )
  {
    if ( i[3] == (__int64 *)a2 )
    {
      *(_QWORD *)(QuotaZInit + 8) = i;
      i[1] = (__int64 *)QuotaZInit;
      break;
    }
  }
  *a4 = (struct CCursorClip::DeadzoneJumping::RegionPortal *)QuotaZInit;
  return 0LL;
}
