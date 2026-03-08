/*
 * XREFs of PopBcdSetDefaultResumeObjectElements @ 0x14082BFD0
 * Callers:
 *     PopBcdEstablishResumeObject @ 0x14082B658 (PopBcdEstablishResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x140999C24 (PopBcdRegenerateResumeObject.c)
 * Callees:
 *     CmIsStateSeparationEnabled @ 0x1402FBD38 (CmIsStateSeparationEnabled.c)
 *     wcsrchr @ 0x1403D5F90 (wcsrchr.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     PopBcdSetupResumeObject @ 0x14082B3F0 (PopBcdSetupResumeObject.c)
 *     PopBcdReadElement @ 0x14082C610 (PopBcdReadElement.c)
 *     BcdSetElementDataWithFlags @ 0x14082D894 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14082E398 (BcdGetElementDataWithFlags.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 PopBcdSetDefaultResumeObjectElements(__int64 a1, __int64 a2, ...)
{
  wchar_t *v4; // rsi
  char *Pool2; // r14
  int v6; // ebx
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // eax
  wchar_t *v11; // rbx
  const wchar_t *v12; // r12
  __int64 v13; // r15
  __int64 v14; // rbx
  __int64 v15; // rax
  size_t v16; // rbx
  int v17; // r15d
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // r8
  int v21; // ebx
  __int64 v22; // r8
  char v23; // al
  _WORD v25[2]; // [rsp+30h] [rbp-40h] BYREF
  int v26; // [rsp+34h] [rbp-3Ch] BYREF
  int v27; // [rsp+38h] [rbp-38h] BYREF
  int v28; // [rsp+3Ch] [rbp-34h] BYREF
  wchar_t *Str; // [rsp+40h] [rbp-30h] BYREF
  PVOID P; // [rsp+48h] [rbp-28h] BYREF
  int ElementDataWithFlags; // [rsp+50h] [rbp-20h]
  int v32; // [rsp+54h] [rbp-1Ch]
  int v33; // [rsp+58h] [rbp-18h]
  _QWORD v34[2]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v35; // [rsp+B0h] [rbp+40h] BYREF
  va_list va; // [rsp+B0h] [rbp+40h]
  __int64 v37; // [rsp+B8h] [rbp+48h] BYREF
  va_list va1; // [rsp+B8h] [rbp+48h]
  va_list va2; // [rsp+C0h] [rbp+50h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v35 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v37 = va_arg(va2, _QWORD);
  LOWORD(v37) = 0;
  LOWORD(v35) = 0;
  v34[0] = 0LL;
  v25[0] = 0;
  P = 0LL;
  v28 = 0;
  v4 = 0LL;
  Str = 0LL;
  Pool2 = 0LL;
  v27 = 0;
  v6 = PopBcdReadElement(a2, 285212673LL, &P, &v28);
  if ( v6 >= 0 )
  {
    v6 = PopBcdReadElement(a2, 301989890LL, &Str, &v27);
    if ( v6 < 0 )
    {
      v4 = Str;
    }
    else
    {
      v27 = 8;
      ElementDataWithFlags = BcdGetElementDataWithFlags(a2, 352321618, v7, (unsigned int)v34, (__int64)&v27);
      v26 = 2;
      v32 = BcdGetElementDataWithFlags(a2, 369098836, v8, (unsigned int)va, (__int64)&v26);
      v26 = 2;
      v10 = BcdGetElementDataWithFlags(a2, 369098822, v9, (unsigned int)v25, (__int64)&v26);
      v4 = Str;
      v33 = v10;
      v11 = wcsrchr(Str, 0x5Cu);
      if ( v11 )
      {
        v12 = L"winresume.efi";
        if ( dword_140C316F0 != 2 )
          v12 = L"winresume.exe";
        v13 = -1LL;
        v14 = ((char *)v11 - (char *)v4 + 2) >> 1;
        v15 = -1LL;
        do
          ++v15;
        while ( v12[v15] );
        LODWORD(Str) = 2 * (v14 + v15) + 2;
        Pool2 = (char *)ExAllocatePool2(256LL, (unsigned int)Str, 1684226640LL);
        if ( Pool2 )
        {
          v16 = 2LL * (unsigned int)v14;
          memmove(Pool2, v4, v16);
          do
            ++v13;
          while ( v12[v13] );
          memmove(&Pool2[v16], v12, 2 * v13 + 2);
          v17 = v28;
          v6 = BcdSetElementDataWithFlags(a1, 285212673LL, v18, P, v28);
          if ( v6 >= 0 )
          {
            if ( !CmIsStateSeparationEnabled()
              || (v6 = BcdSetElementDataWithFlags(a1, 553648133LL, v19, P, v17), v6 >= 0) )
            {
              v6 = BcdSetElementDataWithFlags(a1, 301989890LL, v19, Pool2, (_DWORD)Str);
              if ( v6 >= 0 )
              {
                if ( ElementDataWithFlags >= 0 )
                  BcdSetElementDataWithFlags(a1, 352321618LL, v20, v34, v27);
                v21 = v26;
                if ( v32 >= 0 )
                  BcdSetElementDataWithFlags(a1, 369098836LL, v20, (__int64 *)va, v26);
                if ( v33 >= 0 )
                  BcdSetElementDataWithFlags(a1, 369098822LL, v20, v25, v21);
                v6 = PopBcdSetupResumeObject(a1);
                if ( v6 >= 0 )
                {
                  v23 = v37;
                  if ( (_BYTE)KdDebuggerEnabled )
                    v23 = 1;
                  LOBYTE(v37) = v23;
                  v6 = BcdSetElementDataWithFlags(a1, 637534214LL, v22, (__int64 *)va1, 2);
                  if ( v6 >= 0 )
                    v6 = 0;
                }
              }
            }
          }
        }
        else
        {
          v6 = -1073741670;
        }
      }
      else
      {
        v6 = -1073741788;
      }
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v6;
}
