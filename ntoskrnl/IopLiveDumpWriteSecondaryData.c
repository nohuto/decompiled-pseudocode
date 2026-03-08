/*
 * XREFs of IopLiveDumpWriteSecondaryData @ 0x14094D248
 * Callers:
 *     IopLiveDumpWriteDumpFile @ 0x14094C514 (IopLiveDumpWriteDumpFile.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     IopLiveDumpWriteBuffer @ 0x14094C450 (IopLiveDumpWriteBuffer.c)
 */

__int64 __fastcall IopLiveDumpWriteSecondaryData(
        HANDLE FileHandle,
        __int64 a2,
        LARGE_INTEGER *a3,
        _QWORD *a4,
        __int64 a5)
{
  __int128 *v5; // rbx
  __int64 v6; // rdi
  int v10; // ecx
  ULONG v11; // r8d
  __int64 v12; // rax
  _DWORD Buffer[2]; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v15; // [rsp+38h] [rbp-38h]
  int v16; // [rsp+3Ch] [rbp-34h]
  unsigned int i; // [rsp+40h] [rbp-30h] BYREF
  __int128 v18; // [rsp+44h] [rbp-2Ch]
  int v19; // [rsp+54h] [rbp-1Ch]
  int v20; // [rsp+58h] [rbp-18h]
  int v21; // [rsp+5Ch] [rbp-14h]

  v5 = *(__int128 **)(a2 + 8);
  v6 = 0LL;
  v18 = 0LL;
  if ( v5 )
  {
    v15 = 16;
    qmemcpy(Buffer, "DumpBlob", sizeof(Buffer));
    v16 = NtBuildNumber;
    v10 = IopLiveDumpWriteBuffer(FileHandle, Buffer, 0x10u, a3, a5, 0);
    if ( v10 >= 0 )
    {
      v20 = 0;
      v11 = 32;
      v21 = 0;
      v6 = v15;
      for ( i = 32; ; v11 = i )
      {
        v18 = *v5;
        v19 = *((_DWORD *)v5 + 6);
        v10 = IopLiveDumpWriteBuffer(FileHandle, &i, v11, a3, a5, 0);
        if ( v10 < 0 )
          break;
        v6 += i;
        v10 = IopLiveDumpWriteBuffer(FileHandle, *((PVOID *)v5 + 2), *((_DWORD *)v5 + 6), a3, a5, 0);
        if ( v10 < 0 )
          break;
        v12 = *((unsigned int *)v5 + 6);
        v5 = (__int128 *)*((_QWORD *)v5 + 4);
        v6 += v12;
        if ( !v5 )
          break;
      }
    }
  }
  else
  {
    v10 = 0;
  }
  if ( a4 )
    *a4 = v6;
  return (unsigned int)v10;
}
