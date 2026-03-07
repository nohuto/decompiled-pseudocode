__int64 __fastcall CRenderDataBuilder::QueryInterface(CRenderDataBuilder *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rax

  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_92ca7dff_2ac8_4c49_9927_fab209db648e.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_92ca7dff_2ac8_4c49_9927_fab209db648e.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_92ca7dff_2ac8_4c49_9927_fab209db648e.Data4;
    if ( !v4 )
      goto LABEL_9;
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v5 )
    {
      v3 = -2147467262;
      *a3 = 0LL;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147467262, 0x42u, 0LL);
    }
    else
    {
LABEL_9:
      *a3 = this;
      _InterlockedIncrement((volatile signed __int32 *)this + 3);
      return 0;
    }
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, 0x34u, 0LL);
  }
  return v3;
}
