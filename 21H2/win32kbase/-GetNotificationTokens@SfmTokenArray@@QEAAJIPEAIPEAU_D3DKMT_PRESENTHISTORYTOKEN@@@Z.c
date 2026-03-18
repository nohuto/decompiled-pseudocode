/*
 * XREFs of ?GetNotificationTokens@SfmTokenArray@@QEAAJIPEAIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C009B950
 * Callers:
 *     GreSfmGetNotificationTokens @ 0x1C009B840 (GreSfmGetNotificationTokens.c)
 * Callees:
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 */

__int64 __fastcall SfmTokenArray::GetNotificationTokens(
        SfmTokenArray *this,
        unsigned int a2,
        unsigned int *a3,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a4)
{
  unsigned int v6; // ebx
  unsigned int v7; // r14d
  unsigned int v8; // r15d
  unsigned int v9; // edi
  unsigned int v10; // eax

  v6 = 0;
  v7 = a2 / 0x28;
  v8 = *((_DWORD *)this + 3);
  v9 = v8;
  if ( a2 / 0x28 <= v8 )
    v9 = a2 / 0x28;
  memmove(a4, *(const void **)this, 40 * v9);
  v10 = *((_DWORD *)this + 3);
  if ( v9 < v10 )
  {
    memmove(*(void **)this, (const void *)(*(_QWORD *)this + 40 * v9), 40 * (v10 - v9));
    v10 = *((_DWORD *)this + 3);
  }
  *((_DWORD *)this + 3) = v10 - v9;
  *a3 = v9;
  if ( v7 <= v8 && *((_DWORD *)this + 3) )
    return (unsigned int)-1073741789;
  return v6;
}
