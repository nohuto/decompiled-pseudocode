char __fastcall KiInvokeBugCheckAddTriageDumpDataCallbacks(char a1)
{
  __int64 v1; // rax
  PVOID *v2; // rbx
  BOOL v3; // esi
  __int64 v4; // rdx
  __int64 *v5; // rcx
  __int128 v7; // [rsp+40h] [rbp-58h] BYREF
  __int128 v8; // [rsp+50h] [rbp-48h]
  __int128 v9; // [rsp+60h] [rbp-38h]
  __int64 v10; // [rsp+70h] [rbp-28h]
  PVOID *v11; // [rsp+B8h] [rbp+20h] BYREF

  LOBYTE(v1) = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v2 = (PVOID *)KeBugCheckReasonCallbackListHead;
  if ( KeBugCheckReasonCallbackListHead && qword_140C41EA8 )
  {
    v3 = a1 != 0;
    v11 = &KeBugCheckReasonCallbackListHead;
    while ( v2 != &KeBugCheckReasonCallbackListHead )
    {
      LOBYTE(v1) = KeValidateBugCheckCallbackRecord((__int64)v2, 7, &v11);
      if ( (_BYTE)v1 )
      {
        *(_QWORD *)&v7 = 0LL;
        *((_QWORD *)&v7 + 1) = v3 | 0x200000000000000LL;
        LODWORD(v8) = KiBugCheckData;
        *((_QWORD *)&v8 + 1) = qword_140C42448;
        v9 = xmmword_140C42450;
        v10 = qword_140C42460;
        LOBYTE(v1) = ((__int64 (__fastcall *)(__int64, PVOID *, __int128 *))v2[2])(7LL, v2, &v7);
        if ( (_QWORD)v7
          && (LOBYTE(v1) = KiValidateTriageDumpDataArray(v7, v4, 0x2000000u), (_BYTE)v1)
          && (LOBYTE(v1) = KiValidateComponentName((STRSAFE_PCNZCH)v2[3]), (_BYTE)v1) )
        {
          if ( (unsigned int)Feature_TriageDumpDataExtension__private_IsEnabledDeviceUsage() )
            KiGlobalDeduplicateTriageDumpData((_DWORD *)v7);
          *(_QWORD *)(v7 + 40) = v2[3];
          *(_DWORD *)(v7 + 32) = 1;
          v1 = v7;
          v5 = (__int64 *)qword_140C41EB8;
          if ( *(__int64 **)qword_140C41EB8 != &KeBugCheckTriageDumpDataArrayListHead )
            __fastfail(3u);
          *(_QWORD *)v7 = &KeBugCheckTriageDumpDataArrayListHead;
          *(_QWORD *)(v1 + 8) = v5;
          *v5 = v1;
          qword_140C41EB8 = v1;
          *((_BYTE *)v2 + 44) = 3;
        }
        else
        {
          *((_WORD *)v2 + 22) = 260;
        }
      }
      else if ( !v11 )
      {
        return v1;
      }
      v2 = (PVOID *)*v2;
    }
  }
  return v1;
}
