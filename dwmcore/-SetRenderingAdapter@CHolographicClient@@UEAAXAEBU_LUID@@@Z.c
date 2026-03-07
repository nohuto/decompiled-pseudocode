void __fastcall CHolographicClient::SetRenderingAdapter(CHolographicInteropTaskQueue **this, const struct _LUID *a2)
{
  CHolographicInteropTaskQueue::PostMessageW(
    this[32],
    19,
    0LL,
    (void *)a2->HighPart,
    (struct _SLIST_ENTRY *)a2->LowPart,
    0LL,
    0LL);
}
