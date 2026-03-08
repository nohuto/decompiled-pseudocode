/*
 * XREFs of ?TransferTokens@SfmTokenArray@@QEAAJPEAV1@@Z @ 0x1C00D8560
 * Callers:
 *     <none>
 * Callees:
 *     ?AddNotificationTokens@SfmTokenArray@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@I@Z @ 0x1C00D85A8 (-AddNotificationTokens@SfmTokenArray@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@I@Z.c)
 */

__int64 __fastcall SfmTokenArray::TransferTokens(SfmTokenArray *this, struct SfmTokenArray *a2)
{
  unsigned int v4; // r8d
  __int64 result; // rax

  SGDGetSessionState(this);
  v4 = *((_DWORD *)a2 + 3);
  result = 0LL;
  if ( v4 )
  {
    result = SfmTokenArray::AddNotificationTokens(this, *(struct _D3DKMT_PRESENTHISTORYTOKEN **)a2, v4);
    *((_DWORD *)a2 + 3) = 0;
  }
  return result;
}
