/*
 * XREFs of ?ConvertStringsToOneMultiString@@YAJPEAU_UNICODE_STRING@@IPEAPEAGPEAI@Z @ 0x1C020E880
 * Callers:
 *     ?CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C020DE30 (-CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 *     ?CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C020DEBC (-CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0019400 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 */

__int64 __fastcall ConvertStringsToOneMultiString(
        struct _UNICODE_STRING *a1,
        unsigned int a2,
        unsigned __int16 **a3,
        unsigned int *a4)
{
  unsigned __int16 **v4; // r15
  __int64 v5; // rbx
  struct _UNICODE_STRING *v6; // rdi
  int v7; // r13d
  __int64 v8; // rbp
  unsigned int *v9; // r12
  __int64 v10; // r15
  unsigned __int64 Length; // r12
  unsigned int v12; // r14d
  unsigned __int64 v13; // rax
  wchar_t *v14; // rsi
  __int64 v15; // rdx
  char v16; // al
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  unsigned __int64 v19; // rax
  __int64 v20; // rdi
  unsigned int v21; // r11d
  _DWORD *v22; // rsi
  char **v23; // r14
  int v24; // r11d
  __int64 result; // rax
  char **v26; // r11
  char *v27; // rcx
  int v28; // r8d
  int v29; // r10d
  struct _UNICODE_STRING *v30; // [rsp+20h] [rbp-1E8h]
  __int64 v31; // [rsp+28h] [rbp-1E0h]
  wchar_t *Buffer; // [rsp+30h] [rbp-1D8h]
  _DWORD v35[32]; // [rsp+50h] [rbp-1B8h] BYREF
  _QWORD v36[30]; // [rsp+D0h] [rbp-138h] BYREF

  v4 = a3;
  v5 = a2;
  v6 = a1;
  v30 = a1;
  v7 = 0;
  v8 = 0LL;
  v9 = a4;
  memset(v36, 0, sizeof(v36));
  if ( (_DWORD)v5 )
  {
    v10 = (unsigned int)v5;
    v31 = v5;
    do
    {
      Length = v6->Length;
      v12 = 0;
      Buffer = v6->Buffer;
      if ( v6->Length )
      {
        v13 = 0LL;
        do
        {
          v14 = &Buffer[v13 / 2];
          v15 = -1LL;
          do
            ++v15;
          while ( v14[v15] );
          if ( !(_DWORD)v15 )
            break;
          v16 = 0;
          v17 = 0;
          if ( (_DWORD)v8 )
          {
            v26 = (char **)v36;
            while ( !v16 )
            {
              v27 = *v26;
              do
              {
                v28 = *(unsigned __int16 *)&v27[(char *)v14 - *v26];
                v29 = *(unsigned __int16 *)v27 - v28;
                if ( v29 )
                  break;
                v27 += 2;
              }
              while ( v28 );
              if ( !v29 )
                v16 = 1;
              ++v17;
              ++v26;
              if ( v17 >= (unsigned int)v8 )
              {
                if ( v16 )
                  break;
                goto LABEL_9;
              }
            }
          }
          else
          {
LABEL_9:
            if ( (unsigned int)v8 < 0x1E )
            {
              v36[v8] = v14;
              v35[v8] = v15 + 1;
              v8 = (unsigned int)(v8 + 1);
              v7 += v15 + 1;
            }
          }
          v12 += v15 + 1;
          v13 = 2LL * v12;
        }
        while ( v13 < Length );
        v6 = v30;
        v10 = v31;
      }
      ++v6;
      --v10;
      v30 = v6;
      v31 = v10;
    }
    while ( v10 );
    v4 = a3;
    v9 = a4;
  }
  v18 = v7 + 1;
  if ( (unsigned int)(v7 + 1) >= 0xFA00 )
    return 3221225659LL;
  v19 = 2LL * v18;
  if ( !is_mul_ok(v18, 2uLL) )
    v19 = -1LL;
  v20 = operator new[](v19, 0x4B677844u, 256LL);
  if ( !v20 )
    return 3221225495LL;
  v21 = 0;
  if ( (_DWORD)v8 )
  {
    v22 = v35;
    v23 = (char **)v36;
    do
    {
      if ( v18 != v21 )
      {
        RtlStringCchCopyW((char *)(v20 + 2LL * v21), v18 - v21, *v23);
        v21 = *v22 + v24;
      }
      ++v23;
      ++v22;
      --v8;
    }
    while ( v8 );
  }
  *(_WORD *)(v20 + 2LL * v21) = 0;
  result = 0LL;
  *v4 = (unsigned __int16 *)v20;
  *v9 = v18;
  return result;
}
