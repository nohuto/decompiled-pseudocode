/*
 * XREFs of xxxUpdateWindowPositionsForDpiBoundaryChange @ 0x1C01E6264
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00134E8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C006BBB4 (xxxSetWindowPos.c)
 *     IsChildWindowDpiBoundary @ 0x1C007061C (IsChildWindowDpiBoundary.c)
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 *     ThreadLockExchange @ 0x1C00C1250 (ThreadLockExchange.c)
 *     Feature_3645952312__private_IsEnabledDeviceUsage @ 0x1C0165CC4 (Feature_3645952312__private_IsEnabledDeviceUsage.c)
 */

struct tagWND *__fastcall xxxUpdateWindowPositionsForDpiBoundaryChange(__int64 *a1)
{
  struct tagWND *result; // rax
  __int64 v3; // rcx
  struct tagWND *v4; // rax
  struct tagWND *v5; // rdi
  struct tagWND *v6; // rdi
  _QWORD v7[5]; // [rsp+40h] [rbp-28h] BYREF

  result = (struct tagWND *)Feature_3645952312__private_IsEnabledDeviceUsage();
  if ( (_DWORD)result )
  {
    v7[2] = 0LL;
    v7[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v7;
    v7[1] = 0LL;
    while ( a1 )
    {
      v4 = (struct tagWND *)HMValidateHandleNoSecure(a1[1], 1);
      v5 = v4;
      if ( v4 && (*((_DWORD *)a1 + 7) || *((_DWORD *)a1 + 6) || (unsigned int)IsChildWindowDpiBoundary(v4)) )
      {
        ThreadLockExchange((__int64)v5, (__int64)v7);
        xxxSetWindowPos(v5, 0LL, *((unsigned int *)a1 + 4), *((unsigned int *)a1 + 5), 0, 0, 21);
      }
      a1 = (__int64 *)*a1;
    }
    return (struct tagWND *)ThreadUnlock1(v3);
  }
  else
  {
    while ( a1 )
    {
      result = (struct tagWND *)HMValidateHandleNoSecure(a1[1], 1);
      v6 = result;
      if ( result )
      {
        if ( *((_DWORD *)a1 + 7)
          || *((_DWORD *)a1 + 6)
          || (result = (struct tagWND *)IsChildWindowDpiBoundary(result), (_DWORD)result) )
        {
          result = (struct tagWND *)xxxSetWindowPos(
                                      v6,
                                      0LL,
                                      *((unsigned int *)a1 + 4),
                                      *((unsigned int *)a1 + 5),
                                      0,
                                      0,
                                      21);
        }
      }
      a1 = (__int64 *)*a1;
    }
  }
  return result;
}
