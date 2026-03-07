NTSTATUS __fastcall BcdEnumerateObjects(__int64 a1, _DWORD *a2, GUID *a3, unsigned int *a4, unsigned int *a5)
{
  unsigned int *v5; // r12
  GUID *v6; // r14
  char v8; // r15
  NTSTATUS result; // eax
  PCWSTR *v10; // rdi
  int v11; // ebx
  int v12; // eax
  unsigned int v13; // r15d
  __int64 v14; // r12
  const WCHAR **v15; // rsi
  int ObjectDescription; // ebx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned int v19; // ecx
  unsigned int v20; // esi
  unsigned int v21; // r14d
  ULONG v22; // r12d
  int v23; // ebx
  _QWORD *v24; // r8
  __int64 v25; // rax
  char IsOfflineHandle; // [rsp+20h] [rbp-50h]
  ULONG v27; // [rsp+24h] [rbp-4Ch] BYREF
  void *v28; // [rsp+28h] [rbp-48h] BYREF
  void *v29; // [rsp+30h] [rbp-40h] BYREF
  PCWSTR *v30; // [rsp+38h] [rbp-38h] BYREF
  __int64 v31; // [rsp+40h] [rbp-30h] BYREF
  ULONG v32; // [rsp+48h] [rbp-28h]
  _QWORD *v33; // [rsp+50h] [rbp-20h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-18h] BYREF
  GUID *Guid; // [rsp+C0h] [rbp+50h]

  Guid = a3;
  v31 = 0LL;
  v5 = a4;
  v28 = 0LL;
  v6 = a3;
  v27 = 0;
  DestinationString = 0LL;
  if ( !a3 && *a4 || !a5 || !*a2 )
    return -1073741811;
  IsOfflineHandle = BiIsOfflineHandle(a1);
  v8 = IsOfflineHandle;
  result = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( result >= 0 )
  {
    v29 = 0LL;
    v30 = 0LL;
    v10 = 0LL;
    v11 = BiOpenKey(a1, L"Objects", 0x20019u, &v29);
    if ( v11 >= 0 )
    {
      v12 = BiEnumerateSubKeys(v29, &v30, &v27);
      v10 = v30;
      v11 = v12;
      if ( v12 >= 0 )
      {
        v13 = 0;
        if ( v27 )
        {
          v14 = v27;
          v15 = v30;
          do
          {
            if ( (int)BiOpenKey((__int64)v29, *v15, 0x20019u, &v28) >= 0 )
            {
              ObjectDescription = BiGetObjectDescription((__int64)v28, &v31);
              BiCloseKey(v28);
              if ( ObjectDescription >= 0 )
              {
                if ( (unsigned __int8)BiIsEnumerateMatch((unsigned int)a2[1], HIDWORD(v31)) )
                  ++v13;
              }
            }
            ++v15;
            --v14;
          }
          while ( v14 );
          v5 = a4;
          v6 = Guid;
        }
        v17 = 24LL * v13;
        if ( v17 > 0xFFFFFFFF
          || (v18 = 8LL * v13, v19 = (v17 + 7) & 0xFFFFFFF8,
                               v33 = (_QWORD *)((char *)&v6->Data1 + v19),
                               v18 > 0xFFFFFFFF)
          || (v20 = v19 + ((v18 + 7) & 0xFFFFFFF8), v20 < v19) )
        {
          v11 = -1073741675;
        }
        else if ( v20 <= *v5 )
        {
          v32 = 0;
          v21 = 0;
          if ( v27 )
          {
            v22 = v32;
            LODWORD(v30) = v19 + ((v18 + 7) & 0xFFFFFFF8);
            do
            {
              if ( v21 >= v13 )
                break;
              if ( (int)BiOpenKey((__int64)v29, v10[v22], 0x20019u, &v28) >= 0 )
              {
                v23 = BiGetObjectDescription((__int64)v28, &v31);
                BiCloseKey(v28);
                if ( v23 >= 0 )
                {
                  if ( (unsigned __int8)BiIsEnumerateMatch((unsigned int)a2[1], HIDWORD(v31)) )
                  {
                    RtlInitUnicodeString(&DestinationString, v10[v22]);
                    if ( RtlGUIDFromString(&DestinationString, Guid) >= 0 )
                    {
                      v24 = v33;
                      v25 = v31;
                      *(_QWORD *)&Guid[1].Data1 = v33;
                      Guid = (GUID *)((char *)Guid + 24);
                      *v24 = v25;
                      v33 = v24 + 1;
                      ++v21;
                    }
                  }
                }
              }
              ++v22;
            }
            while ( v22 < v27 );
            v20 = (unsigned int)v30;
            v5 = a4;
          }
          v11 = 0;
          *v5 = v20;
          *a5 = v21;
        }
        else
        {
          v11 = -1073741789;
          *v5 = v20;
          *a5 = v13;
        }
        v8 = IsOfflineHandle;
      }
    }
    if ( v29 )
      BiCloseKey(v29);
    if ( v10 )
      ExFreePoolWithTag(v10, 0x4B444342u);
    BiReleaseBcdSyncMutant(v8);
    return v11;
  }
  return result;
}
