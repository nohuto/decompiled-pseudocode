/*
 * XREFs of ?QueryInterface@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180018F30
 * Callers:
 *     ?QueryInterface@ConnectionIndirector@BamoImpl@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004B360 (-QueryInterface@ConnectionIndirector@BamoImpl@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::QueryInterface(
        unsigned __int64 this,
        const struct _GUID *a2,
        void **a3)
{
  volatile signed __int32 *v3; // r10
  __int64 v4; // rax
  unsigned int v6; // edx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  void *v10; // rax

  v3 = (volatile signed __int32 *)(this - 16);
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  v6 = 0;
  if ( !v4 )
    goto LABEL_14;
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_6dfae6da_7941_4c1e_a565_c18161b30018.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_6dfae6da_7941_4c1e_a565_c18161b30018.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_6dfae6da_7941_4c1e_a565_c18161b30018.Data4;
  if ( !v7 )
    goto LABEL_14;
  v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v8 )
    goto LABEL_13;
  v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_8a2fc306_f225_47dd_a4a4_6c28646de4a3.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_8a2fc306_f225_47dd_a4a4_6c28646de4a3.Data1 )
    v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_8a2fc306_f225_47dd_a4a4_6c28646de4a3.Data4;
  if ( !v9 )
  {
LABEL_13:
    this = (unsigned __int64)(v3 + 6);
LABEL_14:
    v10 = (void *)(this & -(__int64)(v3 != 0LL));
    goto LABEL_15;
  }
  v10 = 0LL;
LABEL_15:
  *a3 = v10;
  if ( v10 )
    _InterlockedIncrement(v3 + 2);
  else
    return (unsigned int)-2147467262;
  return v6;
}
