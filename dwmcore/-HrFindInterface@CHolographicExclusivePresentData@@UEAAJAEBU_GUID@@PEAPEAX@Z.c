__int64 __fastcall CHolographicExclusivePresentData::HrFindInterface(
        CHolographicExclusivePresentData *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rax
  unsigned int v4; // edx

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_4781ba52_4074_45c2_9296_6f54fd9e0368.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_4781ba52_4074_45c2_9296_6f54fd9e0368.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_4781ba52_4074_45c2_9296_6f54fd9e0368.Data4;
  v4 = 0;
  if ( v3 )
    return (unsigned int)-2147467262;
  else
    *a3 = (char *)this - 8;
  return v4;
}
