/*
 * XREFs of Win32ExtractSessionPoolTagInfo @ 0x1C00B64C0
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C01481B0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall Win32ExtractSessionPoolTagInfo(
        int a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        _QWORD *a5,
        _QWORD *a6,
        unsigned __int64 *a7,
        __int64 a8,
        unsigned int a9)
{
  _QWORD *v9; // rax
  unsigned int v11; // esi
  unsigned int v12; // r12d
  unsigned int v13; // r13d
  NTSTATUS result; // eax
  void *v15; // rbx
  NTSTATUS v16; // r15d
  __int64 v17; // r14
  unsigned int v18; // r9d
  bool v19; // di
  unsigned int v20; // eax
  _QWORD *v21; // r15
  __int64 v22; // rdx
  _QWORD *v23; // rbx
  __int64 v24; // r11
  __int64 v25; // r10
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // ecx
  NTSTATUS v29; // [rsp+20h] [rbp-28h]
  __int64 Pool2; // [rsp+28h] [rbp-20h]
  int SystemInformation; // [rsp+30h] [rbp-18h] BYREF
  ULONG v32; // [rsp+34h] [rbp-14h]
  __int64 v33; // [rsp+38h] [rbp-10h]
  ULONG ReturnLength; // [rsp+90h] [rbp+48h] BYREF
  __int64 v35; // [rsp+98h] [rbp+50h]
  unsigned int v36; // [rsp+A0h] [rbp+58h]
  unsigned int *v37; // [rsp+A8h] [rbp+60h]

  v37 = a4;
  v36 = a3;
  v35 = a2;
  v9 = a5;
  SystemInformation = a1;
  *a4 = 0;
  ReturnLength = 0;
  *v9 = 0LL;
  v11 = 0;
  v32 = 0;
  v33 = 0LL;
  v12 = 0;
  v13 = 0;
  *a6 = 0LL;
  *a7 = 0LL;
  result = ZwQuerySystemInformation(SystemSessionPoolTagInformation, &SystemInformation, 0x10u, &ReturnLength);
  if ( result == -1073741820 && ReturnLength )
  {
    Pool2 = ExAllocatePool2(64LL, ReturnLength);
    v15 = (void *)Pool2;
    if ( Pool2 )
    {
      v32 = ReturnLength;
      v33 = Pool2;
      v29 = ZwQuerySystemInformation(SystemSessionPoolTagInformation, &SystemInformation, 0x10u, &ReturnLength);
      v16 = v29;
      if ( v29 >= 0 && *(_DWORD *)(Pool2 + 8) == a1 )
      {
        v17 = a8;
        v18 = a9;
        v19 = a8 && a9;
        v20 = *(_DWORD *)(Pool2 + 12);
        if ( v20 )
        {
          v21 = a5;
          v22 = Pool2 + 20;
          v23 = a6;
          v24 = v20;
          while ( 1 )
          {
            v25 = *(_QWORD *)(v22 + 12);
            if ( v25 || *(_QWORD *)(v22 + 28) )
            {
              if ( !v19 )
                goto LABEL_25;
              v26 = 0LL;
              if ( v18 )
                break;
            }
LABEL_12:
            v22 += 40LL;
            if ( !--v24 )
            {
              v15 = (void *)Pool2;
              v16 = v29;
              goto LABEL_14;
            }
          }
          while ( *(_DWORD *)(v17 + 4 * v26) != *(_DWORD *)(v22 - 4) )
          {
            v26 = (unsigned int)(v26 + 1);
            if ( (unsigned int)v26 >= v18 )
              goto LABEL_12;
          }
LABEL_25:
          if ( v11 < v36 )
          {
            v27 = v11++;
            *(_DWORD *)(v35 + 4 * v27) = *(_DWORD *)(v22 - 4);
          }
          *v21 += v25;
          v12 += *(_DWORD *)v22 - *(_DWORD *)(v22 + 4);
          v28 = *(_DWORD *)(v22 + 20) - *(_DWORD *)(v22 + 24);
          *v23 += *(_QWORD *)(v22 + 28);
          v13 += v28;
          goto LABEL_12;
        }
LABEL_14:
        *v37 = v11;
        *a7 = v12 | ((unsigned __int64)v13 << 32);
      }
      ExFreePoolWithTag(v15, 0x746C7355u);
      return v16;
    }
    else
    {
      return -1073741664;
    }
  }
  return result;
}
