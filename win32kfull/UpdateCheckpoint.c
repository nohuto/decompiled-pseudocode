__int64 __fastcall UpdateCheckpoint(struct tagWND *a1)
{
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  GetRect((__int64)a1, (__int64)&v3, 66);
  return CkptRestore(a1);
}
