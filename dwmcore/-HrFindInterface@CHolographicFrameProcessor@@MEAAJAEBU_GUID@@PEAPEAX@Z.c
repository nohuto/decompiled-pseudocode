__int64 __fastcall CHolographicFrameProcessor::HrFindInterface(
        CHolographicFrameProcessor *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v4; // rax
  unsigned int v5; // r8d
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_5a424495_16c3_4b6d_90be_e53187941ba8.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5a424495_16c3_4b6d_90be_e53187941ba8.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_5a424495_16c3_4b6d_90be_e53187941ba8.Data4;
  v5 = 0;
  if ( v4 )
  {
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b873dd02_3294_45e2_9338_387125e082c2.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b873dd02_3294_45e2_9338_387125e082c2.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b873dd02_3294_45e2_9338_387125e082c2.Data4;
    if ( v7 )
    {
      v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_58174da9_6b91_4256_bb33_9f9f1a265ba2.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_58174da9_6b91_4256_bb33_9f9f1a265ba2.Data1 )
        v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_58174da9_6b91_4256_bb33_9f9f1a265ba2.Data4;
      if ( v8 )
        return (unsigned int)-2147467262;
      v6 = (unsigned __int64)this + 32;
    }
    else
    {
      v6 = (unsigned __int64)this + 24;
    }
  }
  else
  {
    v6 = (unsigned __int64)this + 16;
  }
  *a3 = (void *)(v6 & -(__int64)(this != (CHolographicFrameProcessor *)8));
  return v5;
}
