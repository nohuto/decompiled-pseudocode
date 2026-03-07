__int64 __fastcall CDwmAppHost::QueryInterface(CDwmAppHost *this, const struct _GUID *a2, void **a3)
{
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 result; // rax

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v4 )
    goto LABEL_7;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_3ae5dff1_7681_484a_956a_6fd06c8e671e.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_3ae5dff1_7681_484a_956a_6fd06c8e671e.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_3ae5dff1_7681_484a_956a_6fd06c8e671e.Data4;
  if ( v6 )
  {
    *a3 = 0LL;
    return 2147500034LL;
  }
  else
  {
LABEL_7:
    (*(void (__fastcall **)(CDwmAppHost *))(*(_QWORD *)this + 8LL))(this);
    result = 0LL;
    *a3 = this;
  }
  return result;
}
