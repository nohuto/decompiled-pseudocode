/*
 * XREFs of CempGetTokenHostInfo @ 0x180031210
 * Callers:
 *     CempGetProcessHostInfo @ 0x18003119C (CempGetProcessHostInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180047B22 (memcpy_0.c)
 *     memset_0 @ 0x180047B3A (memset_0.c)
 */

NTSTATUS __fastcall CempGetTokenHostInfo(HANDLE TokenHandle, char *a2)
{
  NTSTATUS result; // eax
  void **Heap; // r14
  NTSTATUS v6; // ebx
  void *v7; // rbx
  ULONG v8; // eax
  __int64 v9; // rdi
  int v10; // esi
  int v11; // r15d
  __int64 v12; // rdx
  _WORD *v13; // rax
  __int16 v14; // cx
  ULONG TokenInformationLength; // [rsp+30h] [rbp-278h] BYREF
  int v16; // [rsp+34h] [rbp-274h] BYREF
  int v17; // [rsp+38h] [rbp-270h] BYREF
  _BYTE v18[464]; // [rsp+40h] [rbp-268h] BYREF
  _BYTE SourceSid[68]; // [rsp+210h] [rbp-98h] BYREF
  int TokenInformation; // [rsp+254h] [rbp-54h] BYREF
  int v21; // [rsp+258h] [rbp-50h]
  __int64 v22; // [rsp+260h] [rbp-48h] BYREF

  memset_0(v18, 0, 0x228uLL);
  v16 = 464;
  result = PsmGetKeyFromToken(TokenHandle, v18, &v16, 0LL);
  if ( result >= 0 )
  {
    result = NtQueryInformationToken(TokenHandle, TokenUser, 0LL, 0, &TokenInformationLength);
    if ( (int)(result + 0x80000000) < 0 || result == -1073741789 )
    {
      Heap = (void **)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, TokenInformationLength);
      if ( Heap )
      {
        v6 = NtQueryInformationToken(TokenHandle, TokenUser, Heap, TokenInformationLength, &TokenInformationLength);
        if ( v6 >= 0 )
        {
          v7 = *Heap;
          memset_0(SourceSid, 0, sizeof(SourceSid));
          v8 = RtlLengthSid(v7);
          memcpy_0(SourceSid, v7, v8);
          v6 = NtQueryInformationToken(TokenHandle, TokenSessionId, &TokenInformation, 4u, &TokenInformationLength);
          if ( v6 >= 0 )
          {
            v6 = PsmQueryBackgroundActivationType(TokenHandle, &v17);
            if ( v6 >= 0 )
            {
              v21 = 1 << v17;
              v6 = RtlQueryTokenHostIdAsUlong64(TokenHandle, &v22);
              if ( v6 >= 0 )
              {
                v9 = v22;
                v10 = v21;
                v11 = TokenInformation;
                memset_0(a2, 0, 0x228uLL);
                v12 = 232LL;
                v13 = a2;
                while ( v12 != -2147483414 )
                {
                  v14 = *(_WORD *)((char *)v13 + v18 - a2);
                  if ( !v14 )
                    break;
                  *v13++ = v14;
                  if ( !--v12 )
                  {
                    --v13;
                    break;
                  }
                }
                v6 = 0;
                *v13 = 0;
                RtlCopySid(0x44u, a2 + 464, SourceSid);
                *((_DWORD *)a2 + 133) = v11;
                *((_DWORD *)a2 + 134) = v10;
                *((_QWORD *)a2 + 68) = v9;
              }
            }
          }
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
        return v6;
      }
      else
      {
        return -1073741801;
      }
    }
  }
  return result;
}
