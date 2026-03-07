struct tagQ *__fastcall tagTHREADINFO::AssignAttachQueue(tagTHREADINFO *this, struct tagQ *a2)
{
  return (struct tagQ *)tagTHREADINFO::AssignQueueWorker(this, (ULONG_PTR)a2, 656);
}
