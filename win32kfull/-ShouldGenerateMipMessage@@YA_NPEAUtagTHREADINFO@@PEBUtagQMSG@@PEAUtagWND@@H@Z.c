bool __fastcall ShouldGenerateMipMessage(struct tagTHREADINFO *a1, const struct tagQMSG *a2, struct tagWND *a3)
{
  __int64 v3; // r10
  int v4; // r9d

  return a2 && (unsigned int)IsMiPActive((__int64)a1, (__int64)a2) && ((unsigned int)IsMiPEnabledForWindow(v3) || v4);
}
