/*
 * XREFs of KsepEvntLogShimsApplied @ 0x1403AA3AC
 * Callers:
 *     KseDriverLoadImage @ 0x14079EAC4 (KseDriverLoadImage.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140208B50 (RtlAppendUnicodeToString.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     RtlAppendUnicodeStringToString @ 0x1402447D0 (RtlAppendUnicodeStringToString.c)
 *     KsepPoolAllocatePaged @ 0x140303CA4 (KsepPoolAllocatePaged.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     RtlStringFromGUIDEx @ 0x140733E90 (RtlStringFromGUIDEx.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall KsepEvntLogShimsApplied(unsigned __int16 *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r12d
  __int64 v5; // rbx
  unsigned __int16 v7; // r14
  UNICODE_STRING *Paged; // rax
  UNICODE_STRING *v9; // rsi
  char *v10; // rdi
  UNICODE_STRING *v11; // rbx
  unsigned __int16 *v12; // r15
  wchar_t *Buffer; // rcx
  int v14; // ebx
  unsigned int v15; // ecx
  ULONG v16; // eax
  unsigned int v17; // [rsp+30h] [rbp-49h] BYREF
  UNICODE_STRING Destination; // [rsp+38h] [rbp-41h] BYREF
  unsigned __int16 *v19; // [rsp+48h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-29h] BYREF
  __int64 v21; // [rsp+60h] [rbp-19h]
  __int64 v22; // [rsp+68h] [rbp-11h]
  unsigned int *v23; // [rsp+70h] [rbp-9h]
  __int64 v24; // [rsp+78h] [rbp-1h]
  wchar_t *v25; // [rsp+80h] [rbp+7h]
  int v26; // [rsp+88h] [rbp+Fh]
  int v27; // [rsp+8Ch] [rbp+13h]

  v3 = 0;
  v19 = a1;
  v5 = a3;
  v17 = a3;
  v7 = 0;
  Destination = 0LL;
  if ( KseEtwHandle && EtwEventEnabled(KseEtwHandle, &KseShimsApplied) && (_DWORD)v5 && a2 && a1 )
  {
    Paged = (UNICODE_STRING *)KsepPoolAllocatePaged(94 * v5);
    v9 = Paged;
    if ( Paged )
    {
      v10 = (char *)&Paged[v17];
      if ( v17 )
      {
        do
        {
          v11 = &v9[v3];
          *v11 = 0LL;
          v11->Buffer = (wchar_t *)v10;
          v10 += 78;
          v11->MaximumLength = 78;
          RtlStringFromGUIDEx(a2 + 80LL * v3++, v11, 0LL);
          v7 += v11->Length + 4;
        }
        while ( v3 < v17 );
        v12 = v19;
        if ( v7 )
        {
          Destination.Buffer = (wchar_t *)KsepPoolAllocatePaged(v7);
          Buffer = Destination.Buffer;
          if ( Destination.Buffer )
          {
            v14 = 0;
            Destination.MaximumLength = v7;
            if ( v17 )
            {
              while ( RtlAppendUnicodeStringToString(&Destination, &v9[v14]) >= 0 )
              {
                v15 = v17;
                if ( v14 != v17 - 1 )
                {
                  if ( RtlAppendUnicodeToString(&Destination, L"\n") < 0 )
                    break;
                  v15 = v17;
                }
                if ( ++v14 >= v15 )
                {
                  Buffer = Destination.Buffer;
                  goto LABEL_16;
                }
              }
            }
            else
            {
LABEL_16:
              UserData.Ptr = *((_QWORD *)v12 + 1);
              v16 = *v12 + 2;
              v22 = 4LL;
              UserData.Size = v16;
              v21 = a2 + 68;
              v23 = &v17;
              v24 = 4LL;
              v26 = Destination.Length + 2;
              v25 = Buffer;
              UserData.Reserved = 0;
              v27 = 0;
              EtwWrite(KseEtwHandle, &KseShimsApplied, 0LL, 4u, &UserData);
            }
          }
        }
      }
      ExFreePoolWithTag(v9, 0x6145534Bu);
      _InterlockedIncrement(&dword_140C40384);
    }
    if ( Destination.Buffer )
    {
      ExFreePoolWithTag(Destination.Buffer, 0x6145534Bu);
      _InterlockedIncrement(&dword_140C40384);
    }
  }
}
