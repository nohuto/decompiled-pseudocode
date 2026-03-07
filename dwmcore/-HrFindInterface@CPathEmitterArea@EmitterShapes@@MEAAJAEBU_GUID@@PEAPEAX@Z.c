__int64 __fastcall EmitterShapes::CPathEmitterArea::HrFindInterface(
        EmitterShapes::CPathEmitterArea *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax

  v3 = 0;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_2cd906c1_12e2_11dc_9fed_001143a055f9.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2cd906c1_12e2_11dc_9fed_001143a055f9.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_2cd906c1_12e2_11dc_9fed_001143a055f9.Data4;
  if ( v4 )
  {
    v3 = -2147467262;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147467262, 0x130u, 0LL);
  }
  else
  {
    *a3 = this;
  }
  return v3;
}
