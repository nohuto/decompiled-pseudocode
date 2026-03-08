/*
 * XREFs of KasanWrapperRtlRestoreContext @ 0x1402EA9A0
 * Callers:
 *     RtlRestoreContext @ 0x140420880 (RtlRestoreContext.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x140312A40 (KeQueryCurrentStackInformationEx.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KeGetCurrentStackPointer @ 0x1404166E0 (KeGetCurrentStackPointer.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall KasanWrapperRtlRestoreContext(__int64 a1)
{
  __int64 result; // rax
  __int64 CurrentStackPointer; // rax
  unsigned __int64 v4; // rdi
  _BYTE *v5; // rsi
  unsigned __int64 v6; // rbx
  _BYTE *v7; // rdi
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF
  int v10; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v11; // [rsp+88h] [rbp+20h] BYREF

  result = (__int64)&retaddr;
  v10 = 0;
  BugCheckParameter3[0] = 0LL;
  v11 = 0LL;
  if ( KasaniEnabled )
  {
    result = *(_DWORD *)(a1 + 48) & 0x100001;
    if ( (_DWORD)result == 1048577 )
    {
      CurrentStackPointer = KeGetCurrentStackPointer();
      if ( (unsigned __int8)KeQueryCurrentStackInformationEx(CurrentStackPointer, &v10, BugCheckParameter3, &v11) )
      {
        if ( v10 )
        {
          if ( v10 != 5 && v10 != 7 && (unsigned int)(v10 - 8) >= 2 )
          {
            v4 = v11 - BugCheckParameter3[0];
            if ( KasaniEnabled )
            {
              if ( BugCheckParameter3[0] < 0xFFFF800000000000uLL )
                KeBugCheckEx(0x1F1u, 2uLL, 1uLL, BugCheckParameter3[0], 0LL);
              if ( (BugCheckParameter3[0] & 7) != 0 )
                KeBugCheckEx(0x1F1u, 2uLL, 2uLL, BugCheckParameter3[0], 8uLL);
              if ( v11 < BugCheckParameter3[0] )
                KeBugCheckEx(0x1F1u, 2uLL, 3uLL, BugCheckParameter3[0], v11 - BugCheckParameter3[0]);
              v5 = (_BYTE *)(KasaniShadow + ((BugCheckParameter3[0] + 0x800000000000LL) >> 3));
              if ( v4 >> 3 )
              {
                memset((void *)(KasaniShadow + ((BugCheckParameter3[0] + 0x800000000000LL) >> 3)), 0, v4 >> 3);
                v5 += v4 >> 3;
              }
              if ( (v4 & 7) != 0 )
                *v5 = v4 & 7;
            }
          }
        }
      }
      result = KeQueryCurrentStackInformationEx(*(_QWORD *)(a1 + 152), &v10, BugCheckParameter3, &v11);
      if ( (_BYTE)result )
      {
        if ( v10 )
        {
          if ( v10 != 5 && v10 != 7 && (unsigned int)(v10 - 8) >= 2 )
          {
            v6 = v11 - BugCheckParameter3[0];
            if ( KasaniEnabled )
            {
              if ( BugCheckParameter3[0] < 0xFFFF800000000000uLL )
                KeBugCheckEx(0x1F1u, 2uLL, 1uLL, BugCheckParameter3[0], 0LL);
              if ( (BugCheckParameter3[0] & 7) != 0 )
                KeBugCheckEx(0x1F1u, 2uLL, 2uLL, BugCheckParameter3[0], 8uLL);
              result = v11;
              if ( v11 < BugCheckParameter3[0] )
                KeBugCheckEx(0x1F1u, 2uLL, 3uLL, BugCheckParameter3[0], v11 - BugCheckParameter3[0]);
              v7 = (_BYTE *)(KasaniShadow + ((BugCheckParameter3[0] + 0x800000000000LL) >> 3));
              if ( v6 >> 3 )
              {
                result = (__int64)memset(
                                    (void *)(KasaniShadow + ((BugCheckParameter3[0] + 0x800000000000LL) >> 3)),
                                    0,
                                    v6 >> 3);
                v7 += v6 >> 3;
              }
              if ( (v6 & 7) != 0 )
                *v7 = v6 & 7;
            }
          }
        }
      }
    }
  }
  return result;
}
