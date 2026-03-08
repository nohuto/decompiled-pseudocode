/*
 * XREFs of NtCreateProcessStateChange @ 0x1409AD160
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObInsertObjectEx @ 0x1407BB7C0 (ObInsertObjectEx.c)
 *     NtClose @ 0x1407C00E0 (NtClose.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCreateObjectEx @ 0x1407D1090 (ObCreateObjectEx.c)
 */

__int64 __fastcall NtCreateProcessStateChange(HANDLE *a1, unsigned int a2, __int64 a3, ULONG_PTR a4, int a5)
{
  char PreviousMode; // r14
  __int64 v9; // rcx
  int inserted; // edi
  PVOID *v11; // rcx
  __int64 Tag; // [rsp+20h] [rbp-68h]
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-28h] BYREF
  PVOID v16[3]; // [rsp+68h] [rbp-20h] BYREF

  Object = 0LL;
  v16[0] = 0LL;
  Handle = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v9 = (__int64)a1;
    *(_QWORD *)v9 = *(_QWORD *)v9;
  }
  if ( a5 )
  {
    inserted = -1073741811;
  }
  else
  {
    inserted = ObpReferenceObjectByHandleWithTag(
                 a4,
                 512,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x63507350u,
                 &Object,
                 0LL,
                 0LL);
    if ( inserted >= 0 )
    {
      inserted = ObCreateObjectEx(
                   PreviousMode,
                   (_DWORD *)PspProcessStateChangeType,
                   a3,
                   PreviousMode,
                   Tag,
                   24,
                   0,
                   0,
                   v16,
                   0LL);
      if ( inserted >= 0 )
      {
        v11 = (PVOID *)v16[0];
        *(_OWORD *)v16[0] = 0LL;
        v11[2] = 0LL;
        v11[1] = 0LL;
        *v11 = Object;
        *((_DWORD *)v11 + 4) = 0;
        Object = 0LL;
        inserted = ObInsertObjectEx((char *)v11, 0LL, a2, 0, 0, 0LL, &Handle);
        if ( inserted >= 0 )
        {
          *a1 = Handle;
          Handle = 0LL;
        }
      }
    }
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x63507350u);
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)inserted;
}
